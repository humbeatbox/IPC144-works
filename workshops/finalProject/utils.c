/* Citation and Sources...
Final Project Milestone1
Module: utils.c
Filename: utils.c
Version 1.0
Author	Hsiao-Kang Chang
Revision 1
-----------------------------------------------------------
Date      Reason
2024/3/27  Preliminary release

-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my project milestones.
-----------------------------------------------------------
*/
#include "utils.h"
#include "POS.h"
void fluKey(){
    while  (getchar() != '\n');
}
void flushFile( FILE* fptr ) {
    char ch=0;
    while ( ch != '\n' ) {
        fscanf( fptr, "%c", &ch );
    }
}
int getInt(){
    int ret;
    char trash = ' ';

    while (scanf("%d%c",&ret,&trash) !=2 || trash != '\n'){
        fluKey();
        printf("Invalid Integer, try again: ");
    }
    return ret;
}
float getFlo(){
    float ret;
    char trash = ' ';
    while(scanf("%f%c",&ret,&trash) != 2 || trash != '\n'){
        fluKey();
        printf("Bad real number, try again\n> ");
    }
    return ret;
}
double getDbl( ) {
    double num;
    char trash = ' ';
    while ( scanf( "%lf%c", &num, &trash ) != 2 ||
            trash != '\n' ) {
        fluKey( );
        printf( "Invalid Double, try again: " );
    }
    return num;
}

char getChar(){
    char ret;
    char trash = ' ';
    while(scanf("%c%c",&ret,&trash) != 2 || trash != '\n'){
        fluKey();
        printf("Bad Char, try again\n> ");
    }
    return ret;
}

void getLin(char line[]){
    scanf("%[^\n]",line);
    fluKey();
}



void strCpy( char des[], const char src[] ) {//int len
    int i ;
    for ( i = 0; src[i]; i++ ) {
        des[i] = src[i];
    }
    des[i] = 0;//if(i<len)des[i] = 0
}