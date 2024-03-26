//
// Created by Gary Chang on 2024-03-26.
//

#include "utils.h"
#include "POS.h"
void fluKey(){
    while  (getchar() != '\n');
}
int getInt(){
    int ret;
    char trash = ' ';
    while (scanf("%d%c",&ret,&trash) !=2 || trash != '\n'){
        fluKey();
        printf("Invalid Integer, try again:\n> ");
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