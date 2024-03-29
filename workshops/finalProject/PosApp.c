/* Citation and Sources...
Final Project Milestone2
Module: PosApp.c
Filename: PosApp.c
Version 1.0
Author	Hsiao-Kang Chang
Revision 1
-----------------------------------------------------------
Date      Reason
2024/3/27  Preliminary release

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
int noOfReadItem=0;//define count the number of read item from the file


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
}
void removeItem(void){
    start("Adding Item");
}
void stockItem(void){
    start("Stock Items");
}
void POS(void){
    start("Point Of Sale");
}

void saveItems(const char filename[]){
    start("saveItems");
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
        fclose(myfile);
    }else {
        printf("Could not open >>" "%s" "<<\n",filename );
    }
    start("Done!");
}

int loadItems(const char filename[]){
    start("loadItems");
    struct Item readItem; //create a temp item to read from the file
    FILE* myfile = fopen(filename, "r");//open the file for read
    if(myfile) {//if file exist keep going

        //read the file and put input the tmp readItem
        while (fscanf(myfile, "%[^\\,],%[^\\,],%lf,%d,%d", readItem.SKU, readItem.name, &readItem.price, &readItem.taxed, &readItem.quantity) == 5) {

            flushFile(myfile);

            //save the local item into global items
            strcpy(items[noOfReadItem].SKU, readItem.SKU);
            strcpy(items[noOfReadItem].name , readItem.name);
            items[noOfReadItem].price = readItem.price;
            items[noOfReadItem].taxed = readItem.taxed;
            items[noOfReadItem].quantity = readItem.quantity;

            noOfReadItem++;//for save to next items
        }
        fclose(myfile);
    }else {
        fprintf( stderr, "File not found!\n" );
    }
    start("Done!");
    return noOfReadItem;
}

double cost(const struct Item* item){
    return (item->price * (1+ (item->taxed * TAX)));//return the true cost --the taxed price;
}

void listItems(void){

    printf(" Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n"
           "-----|--------|--------------------|-------|---|-----|---------|\n");
    int i;
    for (i = 0; i < noOfReadItem; i++) {//read the items from the items and print it ine by one
        printf("%4d" " | " "%6s" " | " "%-18s" " |" "%6.2lf" " | ",i+1,items[i].SKU, items[i].name, items[i].price);
        (items[i].taxed == 0)?printf(" "): printf("T");//print the number of taxed in the char

        printf(" | " "%3d" " |" "%8.2lf" " |\n",items[i].quantity,items[i].quantity * cost(&items[i]));
    }
    printf("-----^--------^--------------------^-------^---^-----^---------^\n");
}


double billDisplay(const struct Item* item){
    char cur_cost[15];
    strlcpy(cur_cost,item->name,15);//using the size bound string copy string
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
    printf("=============v\n");//end
}

//search the SKU
int search(void){
    int success = -1;//default no find

    char skuCom[MAX_SKU_LEN];
    printf("Sku: ");
    getLin(skuCom);

    if(skuCom[0] == '\0'){//if no input initial the first char as '0'
        success = -2;
    }

    int i;
    for (i = 0; i < noOfReadItem; ++i) {
        if(strcmp(skuCom,items[i].SKU) == 0){
            success = i;
        }
    }

    return success;
}