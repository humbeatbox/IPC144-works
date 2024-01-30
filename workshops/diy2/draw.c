//
// Created by Gary Chang on 2024-01-30.
//
#include <stdio.h>
void rectangle(char leftTop, char topFill, char rightTop,
               char left, char right,
               char rightButtom, char buttomFill, char leftButtom,
               char fillScreen) {

    int minFillTimes = fillScreen - 57;//transfer
    int topFillCount = 0;
    int screenFillCount = 0;
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

    for (int i = 0; i < minFillTimes-7; i++) {
        printf("\n");
        printf("%c", left);
        //printf("%c", fillScreen);
        for (int j = 0; j < minFillTimes; ++j) {
            printf("%c", fillScreen);
        }
        printf("%c",right);
        //printf("\n");
    }


/*
        while (screenFillCount <= minFillTimes) {
            printf("%c", fillScreen);
            screenFillCount = screenFillCount + 1;
        }
 */



    //Body--------------------------------------------------------------------
    printf("\n");
    //bottom
    printf("%c",leftButtom);
    while (buttomFillCount < minFillTimes){
        printf("%c",buttomFill);
        buttomFillCount = buttomFillCount + 1;
    }
    printf("%c",rightButtom);
    //upper


}
