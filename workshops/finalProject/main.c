/* Citation and Sources...
Final Project Milestone2
Module: main.c
Filename: main.c
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

//For MS2
/*
#include "PosUI.h"

int main() {
    runPos("posdata.csv");
    return 0;
}*/

//for MS1
//If I upload my personal main Matrix can not replay by main_pro.c and it goes wrong
/*#include <stdio.h>
#include "POS.h"
#include "PosUI.h"

int main() {
    printf("Testing POS.h defined values:\n");
    if(TAX - 0.13 < 0.00001 && 0.13 - TAX < 0.00001) {
        printf("TAX value is corrct!\n");
    } else {
        printf("The defined value for TAX is incorrect!\n");
    }
    if(MAX_SKU_LEN == 6) {
        printf("MAX_SKU_LEN value is corrct!\n");
    } else {
        printf("MAX_SKU_LEN defined value for TAX is incorrect!\n");
    }
    if(MAX_STOCK_NUMBER == 999) {
        printf("MAX_STOCK_NUMBER value is corrct!\n");
    } else {
        printf("MAX_STOCK_NUMBER defined value for TAX is incorrect!\n");
    }
    if(MAX_NO_ITEMS == 500) {
        printf("MAX_NO_ITEMS value is corrct!\n");
    } else {
        printf("MAX_NO_ITEMS defined value for TAX is incorrect!\n");
    }
    if(MAX_BILL_ITEMS == 10) {
        printf("MAX_BILL_ITEMS value is corrct!\n");
    } else {
        printf("MAX_BILL_ITEMS defined value for TAX is incorrect!\n");
    }
    runPos("posdata.csv");
    return 0;
}*/


/*

//for M31
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
}
*/

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

/*
//for MS33
#include <stdio.h>
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
    for(i = 0; i < 6; i++) {
        display(&I[i]);
        total += cost(&I[i]);
    }
    printf("total: %.2lf", total);
    return 0;
}*/
/*
 * //for MS34
#include <stdio.h>
#include "PosApp.h"
int main() {
    int i;
    int foundIndex;
    loadItems("posdata.csv");
    for(i = 0; (foundIndex = search()) != -2;i++){
        if(foundIndex >= 0) {
            printf("SKU found at index %d\n", foundIndex);
        }
        else {
            printf("SKU not found!\n");
        }
    }
    printf("Search was executed %d times...", i);
    return 0;
}*/

/*

//for MS35
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PosUI.h"
void fileDump(const char* filename);
void ressetData();
int main() {
    ressetData();
    fileDump("posdata.csv");
    runPos("posdata.csv");
    fileDump("posdata.csv");
    return 0;
}

void ressetData() {
    FILE* f_origin = fopen("posdataOrigin.csv", "r");
    FILE* f_data = fopen("posdata.csv", "w");
    char ch;
    while(fscanf(f_origin, "%c", &ch) == 1) {
        fprintf(f_data, "%c", ch);
    }
    fclose(f_origin);
    fclose(f_data);
}
void fileDump(const char* filename) {
    FILE* fptr = fopen(filename, "r");
    if(fptr) {
        char ch = 0;
        printf("Contents of file >>%s<<:\n", filename);
        while(fscanf(fptr, "%c", &ch) == 1) {
            putchar(ch);
        }
        fclose(fptr);
        printf("End of data in >>%s<<\n", filename);
    } else {
        printf("file: >>%s<< not found!\n", filename);
    }
}
*/


//for MS4 and MS5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PosUI.h"


void fileDump(const char* filename);
void ressetData();
int main() {
    ressetData();
    fileDump("posdata.csv");
    runPos("posdata.csv");
    fileDump("posdata.csv");
    return 0;
}

void ressetData() {
    FILE* f_origin = fopen("posdataOrigin.csv", "r");
    FILE* f_data = fopen("posdata.csv", "w");
    char ch;
    while(fscanf(f_origin, "%c", &ch) == 1) {
        fprintf(f_data, "%c", ch);
    }
    fclose(f_origin);
    fclose(f_data);
}

void fileDump(const char* filename) {
    FILE* fptr = fopen(filename, "r");
    if(fptr) {
        char ch = 0;
        printf("Contents of file >>%s<<:\n", filename);
        while(fscanf(fptr, "%c", &ch) == 1) {
            putchar(ch);
        }
        fclose(fptr);
        printf("End of data in >>%s<<\n", filename);
    } else {
        printf("file: >>%s<< not found!\n", filename);
    }
}
