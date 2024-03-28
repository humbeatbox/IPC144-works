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
