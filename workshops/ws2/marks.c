//
// Created by Gary Chang on 2024-01-30.
//
#include <stdio.h>
int getInt(void);//get the int from the user
double getDouble(void);//get the double from the user

double calculateAverageMark(){
    double markTotal = 0.0;
    int counter = 0;
    double markValue;
    double average;
    int noOfMarks;
    printf("Please enter the number of marks\n");
    noOfMarks = getInt();
    while(counter < noOfMarks){
        printf("Enter mark #%d\n",counter+1);
        markValue = getDouble();
        markTotal = markTotal + markValue;
        counter = counter+1;
    }
    average = markTotal/noOfMarks;
    return average;
}