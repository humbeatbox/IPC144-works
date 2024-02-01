//
// Created by Gary Chang on 2024-01-30.
//
#include <stdio.h>
void rectangle(char leftTop, char topFill, char rightTop,
               char left, char right,
               char rightButtom, char fillButtom, char leftButtom,
               char fillScreen) {

    int minFillTimes = fillScreen - 57;//transfer
    int topFillCount = 0;
    int buttomFillCount = 0;

    //upper
    printf("%c", leftTop);
    while (topFillCount < minFillTimes) {
        printf("%c", topFill);
        topFillCount = topFillCount + 1;
    }
    printf("%c", rightTop);
    //upper
    //Body--------------------------------------------------------------------
    int i = 0;
    int j = 0;
    for (i = 0; i < minFillTimes-7; i++) {
        printf("\n");
        printf("%c", left);
        for (j = 0; j < minFillTimes; j++) {
            printf("%c", fillScreen);
        }
        printf("%c",right);
    }
    //Body--------------------------------------------------------------------
    printf("\n");
    //bottom
    printf("%c",leftButtom);
    while (buttomFillCount < minFillTimes){
        printf("%c",fillButtom);
        buttomFillCount = buttomFillCount + 1;
    }
    printf("%c",rightButtom);
    //upper
    //printf("\n");

}
