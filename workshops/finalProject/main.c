/* Citation and Sources...
Final Project Milestone2
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


#include "PosUI.h"

int main() {
    runPos("posdata.csv");
    return 0;
}


/*
for M31
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PosApp.h"
void fileDump(const char* filename);
int main() {
    fileDump("posdata.csv");
    loadItems("posdata.csv");
    saveItems("posdata_out.csv");
    fileDump("posdata_out.csv");
    return 0;
}

void fileDump(const char* filename) {
    FILE* fptr= fopen(filename, "r");
    if(fptr) {
        char ch=0;
        printf("Contents of file >>%s<<:\n",filename);
        while(fscanf(fptr, "%c", &ch) == 1) {
            putchar(ch);
        }
        fclose(fptr);
        printf("End of data in >>%s<<\n", filename);
    }
    else {
        printf("file: >>%s<< not found!\n", filename);
    }
}*/

/*
//for M32
#include "PosApp.h"
int main() {
    struct Item I[6] = {
            {"3695","Honeydew Melon",5.99,0,20},
            {"1679","Jack's Apple Juice",1.50,0,80},
            {"6539","Joe's Organic Potato Chips",3.29,1,15},
            {"9462","Kiwifruit",0.50,0,123 },
            {"4297","Lays Chips S&V",3.69,1,1},
            {"1234","Milk",3.99,0,1}
    };
    int i;
    double total = 0;
    printf("  Name                Price  taxed\n");
    for(i = 0; i < 6; i++) {
        total += billDisplay(&I[i]);
    }
    printf("total: %.2lf", total);
    return 0;
}*/
