/**/
/*
 * type
 * integers:
 *      char        8 bits          1 bytes long 2 to power 8
 *      short       16 bots long    2 bytes
 *      int         32 bits         4 bytes
 *      long        32 bits -> 64   4 or 8 bytes
 *      long long   64  bits        8 bytes
 *floating:
 *  float
 *  double
 *  long double
 *
 *  stdio
 *  Formate specifiers for IO
 *  char    %c
 *  int     %d
 *  floats  %f
 *  double  %lf
 *
 * */

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
//    int cnt = 0;
//    line40();
    int a = 1;
    int b = 5;
    int c;

    c = a + b;
    printf("%d",&c);
//    line40();

}
