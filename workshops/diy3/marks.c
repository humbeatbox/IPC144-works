//
// Created by Gary Chang on 2024-02-13.
//
#include "utils.h"
#include <stdio.h>
void prnGrade(char letterGrade){//just print the letter //prototype WRITE correct and sepecific name
    if(letterGrade == '+'){
        printf("A");
    }
    putchar(letterGrade);
}
char grade(int markOutOf100){
    char retG = 'X';
    if(markOutOf100>-1 && markOutOf100 < 50){
        retG = 'F';
    }
    if(markOutOf100 > 49 && markOutOf100 < 60){
        retG = 'D';
    }
    if(markOutOf100> 59 && markOutOf100 < 70){
        retG = 'C';
    }
    if(markOutOf100> 69 && markOutOf100 < 80){
        retG = 'B';
    }
    if(markOutOf100> 79 && markOutOf100 < 90){
        retG = 'A';
    }
    if(markOutOf100>89 && markOutOf100 < 101){
        retG = '+';
    }
    return retG;
}


int getNoOfStudents(void){
    int numberGet;
    printf("Please enter the number of students\n> ");
    numberGet = getInt();
    if(numberGet<5){
        printf("Minimum number of students is 5!\n");
        numberGet = 0;
    }else if(numberGet>35){
        printf("Maximum number of students is 35!\n");
        numberGet = 0;
    }
    return  numberGet;
}

int getMark(int maximumAcceptableMarkValue){
    int inPutMark = 0;
    printf("Please print a mark between 0 and %d:\n> ",maximumAcceptableMarkValue);
    inPutMark = getInt();
    if(inPutMark < 0 || inPutMark > maximumAcceptableMarkValue){
        inPutMark = 0;
        printf("Invalid Mark!\n");
    } else{
        inPutMark = inPutMark * 100 / maximumAcceptableMarkValue;
    }
    return inPutMark;
}

int getMaxMark() {
    int maxMark = 0;
    maxMark = getInt();
    if (maxMark < 0 || maxMark > 50) {
        maxMark = 0;
    }
    return maxMark;
}
