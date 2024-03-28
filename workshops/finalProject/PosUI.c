/* Citation and Sources...
Final Project Milestone1
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
    loadItems(filename);
    int done = 0;
    while (!done){
        switch (menu()) {
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
                saveItem(filename);
                done = 1;
                break;
        }
    }
    printf("Goodbye!\n");
}