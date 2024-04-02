/* Citation and Sources...
Final Project Milestone2
Module: PosUI.c
Filename: PosUI.c
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
#include "PosUI.h"
#include "utils.h"
#include "PosApp.h"

void prtFunction(const char* action);
int menu(void){
    int ret;
    printf("The Sene-Store\n"
           "1- Inventory\n"
           "2- Add item\n"
           "3- Remove item\n"
           "4- Stock item\n"
           "5- POS\n"
           "0- exit program\n");
    printf("> ");
    ret = getInt();
    while (ret<0 || ret>5){
        printf("[0<=Selection<=5], retry: ");
        ret = getInt();
    }
    return ret;
}

void runPos(const char filename[]){

    //FILE* myfile = fopen(filename,"r");
    //load the file
    loadItems(filename);
    //display the menu waiting for the user to select
    int done = 0;
    while (!done){
        //selection = slect
        switch (menu()) {// transfer the select to here
            case 1:
//                inventory();
                prtFunction("Inventory");
                break;
            case 2:
//                addItem();
                prtFunction("Adding Item");
                break;
            case 3:
//                removeItem();
                prtFunction("Remove Item");
                break;
            case 4:
                prtFunction("Stock Items");

//                stockItem();
                break;
            case 5:
                prtFunction("Point Of Sale");

//                POS();
                break;
            case 0:
                done = 1;
                prtFunction("Saving Items");

//                saveItems(filename);
                break;
            default:
                printf("Invalid selection!\n");
        }
    }
    printf("Goodbye!\n");
}
void prtFunction(const char* action) {
    printf(">>>> %s...\n", action);
}