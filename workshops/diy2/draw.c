//
// Created by Gary Chang on 2024-01-30.
//
#include <stdio.h>

void rectangle(char leftTop, char topFill, char rightTop,
char right, char rightButtom, char fillButtom,
char leftButtom, char left, char fillScreen,
int width, int height){

    int minFillTimes = fillScreen - 57;//transfer the min character 'A' to number what we need(is 8)
    int topFillCount = 0;
    int buttomFillCount = 0;

    //upper side of rectangle
    printf("%c", leftTop);
    while (topFillCount < minFillTimes) {// fill the mid of top
        printf("%c", topFill);
        topFillCount = topFillCount + 1;
    }
    printf("%c\n", rightTop);
    //upper
    //Body of rectangle--------------------------------------------------------------------
    int i = 0;//tmp var
    //print the number
    while(i < minFillTimes-7){//
        printf("%c", left);
        int j= 0;//tmp var
        while  ( j <minFillTimes){//fill the character with letter
            printf("%c", fillScreen);
            j++;
        }
        printf("%c",right);
        printf("\n");
        i++;
    }

    //Body of rectangle--------------------------------------------------------------------

    //bottom of rectangle
    printf("%c",leftButtom);
    while (buttomFillCount < minFillTimes){// fill the mid of buttom
        printf("%c",fillButtom);
        buttomFillCount = buttomFillCount + 1;
    }
    printf("%c",rightButtom);
    //upper
    printf("\n");

}
