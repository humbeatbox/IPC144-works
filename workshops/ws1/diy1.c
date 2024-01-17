//
//  main.c
//  diy1
//
//  Created by Gary Chang on 2024-01-16.
//
#include <stdio.h>


void title(void);//introduces the title funcion
void line(void);
void info(void);
void cal(void);

int main(void) {
    // insert code here...
    title();//call or run the title function
    line();
    info();
    line();
    
    cal();//get and calculate the number
    return 0;
}





//implementing title function
//what title is suposed to do
void title(void){
    printf("IPC144 NBB\tWorkshop 1\tPart 2\n");
}

//print line
void line(void){
    printf("------------------------------------------------------------\n");
}

//print information
void info(void){
    printf("Name:\n");
    printf("\tHSIAO-KANG CHANG\n");
    printf("Email:\n");
    printf("\thchang67@myseneca.ca\n");
}

//get the number and calculate
void cal(void){
    printf("Enter the marks for the following subjects,\n");
    int sIPC = 0, sULI = 0, sEAC = 0, avgS = 0;
    
    printf("IPC144: ");
    scanf("%d", &sIPC);
    
    printf("ULI101: ");
    scanf("%d", &sULI);
    
    printf("EAC150: ");
    scanf("%d", &sEAC);
    
    avgS = (sIPC + sULI + sEAC)/3;
    printf("The average is: %d\n", avgS);
}