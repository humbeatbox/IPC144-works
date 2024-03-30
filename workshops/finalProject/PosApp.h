/* Citation and Sources...
Final Project Milestone2
Module: PosApp.h
Filename: PosApp.h
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
#ifndef FINALPROJECT_POSAPP_H
#define FINALPROJECT_POSAPP_H
#include "POS.h"
#include <stdio.h>
struct Item{
    char SKU[MAX_SKU_LEN];
    char name[60];
    double price;
    int taxed;
    int quantity;
};
extern struct Item items[MAX_NO_ITEMS];
extern noOfReadItem;

void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);
int loadItems(const char filename[]);
void saveItems(const char filename[]);
double cost(const struct Item* item);
void listItems(void);
double billDisplay(const struct Item* item);
void display(const struct Item* item);
int search(void);
int selectItems(const struct Item* item);
#endif //FINALPROJECT_POSAPP_H
