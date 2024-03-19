//
// Created by Gary Chang on 2024-03-18.
//
#include <stdio.h>
#include "report.h"
#include "utils.h"
void readStudentInfo( int stno[], float mark[], int num ){
    printf("Enter %d student records:\n",num);
    int i;
    for (i = 0; i < num; i++) {
        printf("Enter Student Information # %d:\n",i+1);
        printf("Student Number\n> ");
        stno[i] = getInt();
        printf("Mark\n> ");
        mark[i] = getFlt();
        printf("----------------------");
        nl();
    }
}
void printReport(const int stno[],const float mark[], int num){
    double total = 0.0;
    double avg = 0.0;
    printf("student number   mark\n");
    printf("---------------+------\n");
    int i;
    for (i = 0; i < num; ++i) {
        printf("%-15d|%6.1lf\n",stno[i],mark[i]);
        total = total +mark[i];
    }
    printf("---------------+------\n");
    avg = total/num;
    printf("       Average: %6.1lf\n",avg);
}