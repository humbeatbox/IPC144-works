/* Citation and Sources...
Final Project Milestone2
Module: PosApp.c
Filename: PosApp.c
Version 1.0
Author	Hsiao-Kang Chang
Revision 1
-----------------------------------------------------------
Date      Reason
2024/4/2  Preliminary release

-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my project milestones.
-----------------------------------------------------------
*/

#include "PosApp.h"
#include "utils.h"
#include "POS.h"
#include <string.h>
struct Item items[MAX_NO_ITEMS];//define the global items array to record the file content
int noOfReadItem=0;//define count the number of read item from the file(not items index!!!)


void start(const char* action) {
    printf(">>>> %s...\n", action);
}
void inventory(void){
    double totalCost=0;//calculate to total price
    printf(">>>> List Items...\n");
    listItems();//list items
    int i;
    for ( i = 0; i < noOfReadItem; ++i) {//calculate the price after taxed and plus
        totalCost += items[i].quantity * cost(&items[i]);
    }
    printf("                               Total Asset: " "$  | " "%13.2lf" " |\n",totalCost);
    printf("-----------------------------------------------^---------------^\n");

}
void addItem(void){
    start("Adding Item");
    struct Item inputItem={};
    char taxedOrNot={'\n'};


    //check the number of system if over MAX_NO_ITEMS end of add
    if(noOfReadItem >= 28){
        printf("This system cannot store more that 28 different Items in the inventory!\n");
    } else {

        printf("SKU: ");
        do {
            if (strlen(inputItem.SKU) > MAX_SKU_LEN) {
                printf("SKU number over %d digit please input again\n", MAX_SKU_LEN);
            } else {
                getLin(inputItem.SKU);
            }
        } while (strlen(inputItem.SKU) > MAX_SKU_LEN);

        printf("Name: ");
        getLin(inputItem.name);

        printf("Price: ");
        inputItem.price = getDbl();
        printf("Is the item Taxed? (Y)es/(N)o: ");

        taxedOrNot = getChar();
        do {
            if (taxedOrNot == 'Y' || taxedOrNot == 'y') {
                inputItem.taxed = 1;
                break;
            } else if (taxedOrNot == 'N' || taxedOrNot == 'n') {
                inputItem.taxed = 0;
                break;
            } else {
                printf("Please input again!\n");
                taxedOrNot = getChar();
            }
        } while (!(taxedOrNot == 'Y' || (taxedOrNot == 'y') || taxedOrNot == 'N' || taxedOrNot == 'n'));
        //check and fix later
        // selectInt("Quantity: ",10,);
        printf("Quantity: ");
        inputItem.quantity = getInt();
        while (inputItem.quantity > 999 || inputItem.quantity < 1) {
            printf("[1<=Quantity<=999], retry: ");
            inputItem.quantity = getInt();
        }
        //here save the inputItem to file
        //save the local item into global items
        strcpy(items[noOfReadItem].SKU, inputItem.SKU);
        strcpy(items[noOfReadItem].name , inputItem.name);
        items[noOfReadItem].price = inputItem.price;
        items[noOfReadItem].taxed = inputItem.taxed;
        items[noOfReadItem].quantity = inputItem.quantity;
        noOfReadItem++;
        //save back to the file
        start("Done!");
    }

}


void removeItem(void){
    start("Remove Item");
    //struct Item rmItem={0};
    int rmRowNum=0;
    printf("Select an item:\n");
    printf("-----v--------v--------------------v-------v---v-----v---------v\n");
    listItems();
    //need verify
    rmRowNum = selectInt("Select row: ",12,"Row Number",10,noOfReadItem);
/*    printf("Select row: ");
    //select the remove row
    rmRowNum = getInt();
    while (rmRowNum < 1 || rmRowNum >= noOfReadItem){
            printf("[1<=Row Number<=%d], retry: ",noOfReadItem);
            rmRowNum = getInt();
    }*/

    //remove the item of the indicate row and move the back item to front index
    //items
    int i;
    for (i = rmRowNum; i < noOfReadItem; i++) {
        items[i-1] = items[i];
    }
    noOfReadItem--;
    start("Done!");
}


void stockItem(void){
    start("Stock Items");
    printf("Select an item:\n");
    printf("-----v--------v--------------------v-------v---v-----v---------v\n");
    listItems();
    int selectRow;
    int selectQuantity = 0;
    selectRow = selectItems();
    //show the Selection: number //for V1.1
    display(&items[selectRow-1]);//transfer the row to index

    //need verify
    while((selectQuantity < 1 || selectQuantity > (items[selectRow-1].quantity) || selectQuantity > MAX_STOCK_NUMBER)) {
        selectQuantity = selectInt("Quantity to add: ", 17, "Quantity to Add", 5,
                                   MAX_STOCK_NUMBER - items[selectRow - 1].quantity);
    }
    /*
    printf("Quantity to add: ");
    selectQuantity = getInt();
    while (selectQuantity < 1 || selectQuantity > (items[selectRow-1].quantity) || selectQuantity > MAX_STOCK_NUMBER){//noOfReadItem is an index of items arrays
        printf("[1<=Quantity to Add<=%d], retry: ",MAX_STOCK_NUMBER-items[selectRow-1].quantity);
        selectQuantity = getInt();
    }*/
    items[selectRow-1].quantity += selectQuantity;

    start("Done!");

}



//search the SKU in items and display
//maximum 10 items
void POS(void){
    //Uses an array of Item structure pointers to keep the addresses of the sold items for bill printing
    start("Point Of Sale");
    struct Item* bill[MAX_BILL_ITEMS]={0};//set the bill as zero for print the bill
    double totalPrice = 0;
    int modifyIndex = 0;
    int numOfBill = 0;

    int flag=0;
    while ((flag < MAX_BILL_ITEMS) && (modifyIndex != -2)) {//bill len less than 10 (0-9) and not no input
        modifyIndex = search();//find the target
        if(modifyIndex==-2)break;//in case first time no input
        if(modifyIndex != -1 && items[modifyIndex].quantity == 0){//found item but sold out!
            printf("Item sold out!\n");
        }else if(modifyIndex == -1){//no found item SKU
            printf("SKU not found!\n");
        } else {//found the SKU and not sold out
            bill[numOfBill] = &items[modifyIndex];
            items[modifyIndex].quantity -= 1;//minus one
            display(&items[modifyIndex]);
            numOfBill++;
            totalPrice += cost(&items[modifyIndex]);
            //need a flg to fix the loop and change to while
            flag++;
        }
    }
    if( bill[0] != 0 ) {//first one is not zero
        printf("+---------------v-----------v-----+\n"
               "| Item          |     Price | Tax |\n"
               "+---------------+-----------+-----+\n");
        int j;
        for (j = 0; j < numOfBill; j++) {//have items in bill and less than the max of items in bill
            billDisplay(bill[j]);
        }
        printf("+---------------^-----------^-----+\n"
               "| total:             %6.2lf |\n"
               "^---------------------------^\n", totalPrice);
    }
}

//save the items from the filename input
void saveItems(const char filename[]){
    start("Saving Items");
    FILE* myfile = fopen(filename, "w");//open the file for write
    if(myfile) {
        int i;
        for (i = 0; i < noOfReadItem; i++) {
            fprintf(myfile,
                    "%s"","
                    "%s"","
                    "%.2lf"","
                    "%d"","
                    "%d""\n"
                    ,items[i].SKU,items[i].name,items[i].price,items[i].taxed,items[i].quantity);
        }
    }else {
        printf("Could not open >>" "%s" "<<\n",filename );
    }
    if(myfile)fclose(myfile);//what ever open or not try to close it!!!
    start("Done!");
}

//load the item from the input filename
//return the number of the item in the file
int loadItems(const char filename[]){
    start("Loading Items");
    struct Item readItem; //create a temp item to read from the file
    FILE* myfile = fopen(filename, "r");//open the file for read
    if(myfile) {//if file exist keep going
        //read the file and put input the tmp readItem
        while (fscanf(myfile, "%[^,],%[^,],%lf,%d,%d", readItem.SKU, readItem.name, &readItem.price, &readItem.taxed, &readItem.quantity) == 5) {

            flushFile(myfile);

            //save the local item into global items
            strcpy(items[noOfReadItem].SKU, readItem.SKU);
            strcpy(items[noOfReadItem].name , readItem.name);
            items[noOfReadItem].price = readItem.price;
            items[noOfReadItem].taxed = readItem.taxed;
            items[noOfReadItem].quantity = readItem.quantity;

            noOfReadItem++;//for save to next items
        }
    }else {
        fprintf( stderr, "File not found!\n" );
    }
    if(myfile)fclose(myfile);//what ever open or not try to close it!!!
    start("Done!");
    return noOfReadItem;//return item number not item index
}

//calculate the price after taxed
double cost(const struct Item* item){
    return (item->price * (1+ (item->taxed * TAX)));//return the true cost --the taxed price;
}

//list the items in the saving items list
void listItems(void){
    printf(
            " Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n"
            "-----|--------|--------------------|-------|---|-----|---------|\n");
    int i;
    for (i = 0; i < noOfReadItem; i++) {//read the items from the items and print it ine by one
        printf("%4d" " | " "%6s" " | " "%-18s" " |" "%6.2lf" " | ",i+1,items[i].SKU, items[i].name, items[i].price);
        (items[i].taxed == 0)?printf(" "): printf("T");//print the number of taxed in the char
        printf(" | " "%3d" " |" "%8.2lf" " |\n",items[i].quantity,items[i].quantity * cost(&items[i]));
    }
    printf("-----^--------^--------------------^-------^---^-----^---------^\n");
}

//display bill
//return the price after taxed
double billDisplay(const struct Item* item){
    char cur_cost[15];
    strncpy(cur_cost,item->name,14);//using the size bound string copy string
    printf("| " "%-14s" "|",cur_cost);
    printf("%10.2lf"" | ", cost(item));
    (item->taxed == 0)?printf("   "): printf("Yes");
    printf(" |\n");
    return cost(item);
}

//display item Form
void display(const struct Item* item){
    printf("=============v\n");//start display
    printf("Name:        ""%s\n",item->name);
    printf("Sku:         ""%s\n",item->SKU);
    printf("Price:       ""%.2lf\n",item->price);
    printf("Price + tax: ");
    (item->taxed == 0)?printf("N/A\n"): printf("%.2lf\n", cost(item));
    printf("Stock Qty:   ""%d\n",item->quantity);
    printf("=============^\n");//end
}

//search the SKU
//find the SKU and return SKU
//if no find return -1
//if no input return -2
int search(void){
    int success;
    char skuCom[MAX_SKU_LEN]={};
    printf("Sku: ");
    getLin(skuCom);
    if(skuCom[0] == '\0'){//if no input initial the first char as '0'
        success = -2;
    }
    int i;
    for (i = 0; i < noOfReadItem && success != -2; ++i) {
        if(strcmp(skuCom,items[i].SKU) == 0){
            success = i;
            break;
        }else{
            success = -1;
        }
    }
    return success;
}

//MS4
//let the user select the item of the row number
int selectItems(void){
    int ret;
    //need verify
    ret = selectInt("Select row: ",12,"Row Number",10,noOfReadItem);
    /*
    printf("Select row: ");
    ret = getInt();
    while (ret < 1 || ret > (noOfReadItem)){//noOfReadItem is an index of items arrays
        printf("[1<=Row Number<=%d], retry: ",noOfReadItem);
        ret = getInt();
    }*/
    return ret;
}

//get what want to show on screen
int selectInt(char str1[],int num1,char str2[],int num2,int compare) {
    int ret;//return
    int i;//for loop
    for (i = 0; i < num1; ++i) {
        printf("%s",str1);
    }
    printf("\n");
    ret = getInt();
    while (ret < 1 || ret > (compare)){
        printf("[0<=");
        for (i = 0; i < num2; ++i) {
            printf("%s",str2);
        }
        printf("<=%d], retry: \n",compare);
        ret = getInt();
    }
    return ret;
}
//(Select row:) and (Quantity to add:)
