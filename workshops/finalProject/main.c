/* Citation and Sources...
Final Project Milestone?
Module: main.c
Filename: main.c
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


#include <stdlib.h>
#include <stdbool.h>
#include "utils.h"
#include "PosUI.h"
#include "PosApp.h"
#include "POS.h"
int main() {
    struct Item items[MAX_NO_ITEMS];
    //int noOfItems;





    //do the POS
    bool done = false;
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
                done = true;
                saveItem("posdata.csv");
        }
    }
    runPos("posdata.csv");
    return 0;
}
