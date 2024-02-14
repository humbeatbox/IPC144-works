//
// Created by Gary Chang on 2024-02-13.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKey( void ) {
    char ch=0;
    do {
        ch = getchar( );
    } while ( ch != '\n' );
}

int getInt( ) {
    int num=0;
    scanf( "%d", &num );
    flushKey( );
    return num;
}

int getIntLimited(int min, int max) {
    int val = min -1;
    do {
        val = getInt();
        if (val < min || val > max) {
            printf("Number is out of range (%d <= number <= %d), retry:\n> ", min, max);
        }
    } while (val< min || val > max);
    return val;
}

double getDbl( ) {
    double num = 0.0;
    scanf( "%lf", &num );
    flushKey();
    return num;
}

//find the Max number in array
int arrMaxNumber(int arr[],int arrNumber){
    int maxNum = arr[0];
    int i;
    for ( i = 0 ; i < arrNumber; ++i) {
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}
int arrMinNumber(int arr[],int arrNumber){
    int minNum = arr[0];
    int i;
    for (i = 0; i < arrNumber; ++i) {
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    return minNum;
}

double arrAvgNumber(int arr[],int arrNumber){
    int sum = 0;
    double avgNum = 0;
    int i;
    for ( i = 0;i < arrNumber; ++i) {
        sum += arr[i];
//        printf("%d",arr[i]);
    }
    printf("%d",sum);
    avgNum = sum / arrNumber;
    return avgNum;
}