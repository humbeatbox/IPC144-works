/* Citation and Sources...
Final Project Milestone?
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

void inventory(void){
    printf(">>>> List Items...\n");
    loadItems("postdata.csv");
}
void addItem(void){
    printf(">>>> Adding Item...\n");
}
void removeItem(void){
    printf(">>>> Remove Item...\n");
}
void stockItem(void){
    printf(">>>> Stock Items...\n");
}
void POS(void){
    printf(">>>> Point Of Sale...\n");
}

void saveItem(const char filename[]){
    printf(">>>> Saving Items...\n");
}

int loadItems(const char filename[]){
    int noOfItems = 0;
    //data type like this 1313,Paper Tissue,1.22,1,204
    //struct Item readItem;
    struct Item readItem;
    //struct Item* ptr;
    //ptr = &readItem;
    //fscanf(myfile,"%s,%s,%lf,%d,%d",readItem->SKU,readItem->name,&readItem->price,&readItem->taxed,&readItem->quantity);//with Item* readItem is ok
    int rowNum=1;//start from 1
    double totalCost=0;
    double itemSum=0;
    printf(">>>> List Items...\n");
    printf(" Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n"
           "-----|--------|--------------------|-------|---|-----|---------|\n");
    FILE* myfile = fopen("posdata.csv", "r");
    while (fscanf(myfile, "%[^\\,],%[^\\,],%lf,%d,%d", readItem.SKU, readItem.name, &readItem.price, &readItem.taxed, &readItem.quantity) == 5) {
        flushFile(myfile);

        if(readItem.taxed == 0){
            readItem.taxed = ' ';
            //printf("%c",readItem.taxed);
        }else{
            readItem.taxed = 'T';
        }
        itemSum=readItem.price * readItem.quantity;
        totalCost += itemSum;
        printf("%5d|%8s|%-20s|%7.2lf|%2c |%5d|%9.2lf\n",rowNum,readItem.SKU, readItem.name, readItem.price, readItem.taxed, readItem.quantity,itemSum);
        rowNum++;
    }
    printf("-----^--------^--------------------^-------^---^-----^---------^\n");
    printf("                                       Total Asset: $|%9.2lf\n",totalCost);
    printf("-----^--------^--------------------^-------^---^-----^---------^\n");

    //fscanf(myfile,"%[^\\,],%[^\\,],%lf,%d,%d",a,b,&c,&d,&e);
   /* while (fscanf(myfile, "%[^\\,],%[^\\,],%lf,%d,%d", readItem.SKU, readItem.name, &readItem.price, &readItem.taxed, &readItem.quantity) == 5) {
        flushFile(myfile);
        printf("%s,%s,%.2lf,%d,%d\n",readItem.SKU, readItem.name, readItem.price, readItem.taxed, readItem.quantity);
    }*/
    fclose(myfile);
    //printf(">>>> Done!...\n");

    return 0;
}

double cost(const struct Item* item){
    double the_cost;

    the_cost = item->price * (1+ item->taxed * TAX);
    return the_cost;
}