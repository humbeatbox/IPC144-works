//
// Created by Gary Chang on 2024-03-26.
//

#include "PosUI.h"
#include "utils.h"
int menu(void){
    int ret;
    printf("The Sene-Store\n"
           "1- Inventory\n"
           "2- Add item\n"
           "3- Remove item\n"
           "4- Stock item\n"
           "5- POS\n"
           "0- exit program\n");
    ret = getInt();
    while (ret<0 || ret>5){
        printf("[0<=Selection<=5], retry: ");
        ret = getInt();
    }
    return ret;
}

void runPos(const char filename[]){
    FILE* myfile = fopen(filename,"r");
    printf("Goodbye!\n");
}