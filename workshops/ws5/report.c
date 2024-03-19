//
// Created by Gary Chang on 2024-03-19.
//
#include <stdio.h>
#include "report.h"
#include "utils.h"

void readStudentInfo(struct Student std[], int num){
    int i;
    for (int i = 0; i < num; i++) {
        std[i] = getStudent();
    }
}
struct Student getStudent(void){
    struct Student std;
    printf("Name\n");
    getLin(std.name);
    printf("Student Number\n>");
    std.stNo = getInt();
    printf("Mark\n>");
    std.mark = getFlo();
    printf("----------------------\n");
    return std;
}

void printReport(const struct Student S[], int num){
    float sum,avg;
    printf("Name                           student number   mark\n"
           "------------------------------+----------------+------\n");
    int i;
    for (i = 0; i < num; i++) {
        printf("%-30s| %-15d|%6.1f\n", S[i].name,S[i].stNo,S[i].mark);
        sum = sum + S[i].mark;
    }
    printf("------------------------------+----------------+------\n");
    avg = sum/num;
    printf("                                        Average: %6.1f",avg);
}
