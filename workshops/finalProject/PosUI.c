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
#include <stdbool.h>

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

    FILE* myfile = fopen(filename,"r");
    //load the file
    loadItems(filename);


    //display the menu waiting for the user to select
    bool done = false;
    while (!done){
        //selection = slect
        switch (menu()) {// transfer the select to here
            case 1:
                inventory();
                break;
            case 2:
                addItem();
                break;
            case 3:
                removeItem();
                break;
            case 4:
                stockItem();
                break;
            case 5:
                POS();
                break;
            case 0:
                done = true;
                saveItem("posdata.csv");
                break;
            default:
                printf("Invalid selection!\n");
        }
    }
    printf("Goodbye!\n");
}