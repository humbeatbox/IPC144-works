//
//  main.c
//  diy1
//
//  Created by Gary Chang on 2024-01-16.
//
#include <stdio.h>


void    title(void);//introduces the title funcion
void    line(void);
void    info(void);
int     cal(int ,int ,int);
int     getScore(void);


int main(void) {
    // insert code here...

    int sIPC = 0, sULI = 0, sEAC = 0, avgS = 0;
    title();//call or run the title function
    line();
    info();
    line();
    
    printf("Enter the marks for the following subjects,\n");
    printf("IPC144: ");
    sIPC = getScore();
    printf("ULI101: ");
    sULI = getScore();
    printf("EAC150: ");
    sEAC = getScore();

    
    avgS = cal(sIPC ,sULI ,sEAC);//get and calculate the number
    
    printf("The average is: %d\n", avgS);
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

//calculate the number input
int cal(int ipc,int uil,int eac){
    //printf("%d,%d,%d",ipc,uil,eac);
    return (ipc+uil+eac)/3;
}

//get the Score that user input
int getScore(){
    int theValue;
    scanf("%d", &theValue);
    return theValue;
}