//
// Created by Gary Chang on 2024-02-13.
//
#include "report.h"
#include "utils.h"
#include "marks.h"
#include <stdio.h>
#include <string.h>
void report(int numberOfStudents) {
    printf("What are the marks out of?\n");
    int maxMark = 0;
    while(maxMark == 0){
        maxMark = getMaxMark();
    }

    //creat an array and fill with 0
    int score[numberOfStudents];
    memset(score,0,sizeof(score));

    //save the each mark into an array
    int i;
    for (i = 0; i < numberOfStudents; i++) {

        while(score[i] ==0){
            score[i] = getMark(maxMark);
            printf("Entered: %d%%, %c\n",score[i], grade(score[i]));
        }
    }

    printf("Lowest mark entered: %d\n", arrMinNumber(score,numberOfStudents));
    printf("Highest mark entered: %d\n", arrMaxNumber(score,numberOfStudents));
    printf("Average mark entered: %.1lf\n", arrAvgNumber(score,numberOfStudents));
/*    for (i = 0; i < numberOfStudents; i++) {
//        score[i] = getMark(i);
        printf("%d\t",score[i]);
    }*/
}