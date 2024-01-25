//
//  func.c
//  ws2.1
//
//  Created by Gary Chang on 2024-01-23.
//

//#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void name(void){
    printf("Gary Chang\n");
    printf("---------------------------\n");
}

void line40(void){
    int a = 0;
    while(a<40){
        printf("line %d\n",a+1);
        //a = a + 1;
        a++;
    }

}

void dBox(void){
    //int cnt = 0;
    line40();

    line40();

}
