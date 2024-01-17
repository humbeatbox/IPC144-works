//
//  main.c
//  lab
//
//  Created by Gary Chang on 2024-01-16.
//

#include <stdio.h>


void title(void);//introduces the title funcion
void line(void);//add line
void info(void);//show information

int main(void) {
    title();
    line();
    info();
    line();
    return 0;
}

//implementing function
void title(void){
    printf("IPC144 NBB\tWorkshop 1\tPart 1\n");
}

void line(void){
    printf("------------------------------------------------------------\n");
}

void info(void){
    printf("Name:\n");
    printf("\tHSIAO-KANG CHANG\n");
    printf("Email:\n");
    printf("\thchang67@myseneca.ca\n");
}
