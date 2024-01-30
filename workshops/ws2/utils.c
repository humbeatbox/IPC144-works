#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//
// Created by Gary Chang on 2024-01-30.
//
//get the int from the user
int getInt(void){
    int intValue = 0;
    printf("> ");
    scanf("%d",&intValue);
    return intValue;
}

//get the int from the user
double getDouble(void){
    double douValue = 0.0;
    printf("> ");
    scanf("%lf",&douValue);
    return douValue;
}