#include <stdio.h>
#include "utils.h"
#include "report.h"

void readFile();

int main(void) {
//    struct Student std[100];
//    int num;
//    printf("Enter number of the student records\n> ");
//    num = getInt();
//    readStudentInfo(std, num);
//    printReport(std, num);
    //readFile();
    return 0;
}

void readFile(){
    char str[100]="";
    FILE* stdRcord = fopen("output.txt","w");
    fprintf(stdRcord, "Hello IPC144NBB!\n" );
    //fscanf(stdRcord,"%[^\n]",str);
    fclose(stdRcord);
}