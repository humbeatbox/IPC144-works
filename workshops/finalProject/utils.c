//
// Created by Gary Chang on 2024-03-26.
//

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
    printf("> ");
    while (scanf("%d%c",&ret,&trash) !=2 || trash != '\n'){
        fluKey();
        printf("Invalid Integer, try again:  ");
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

void getLin(char line[]){
    scanf("%[^\n]",line);
    fluKey();
}