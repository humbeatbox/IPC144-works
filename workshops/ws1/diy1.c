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

int main(int argc, const char * argv[]) {
    // insert code here...
    title();//call or run the title function
    line();
    info();
    line();
    
    cal();
    return 0;
}





//implementing title function
//what title is suposed to do
void title(void){
    printf("IPC144 NBB\tWorkshop 1\tPart 2\n");
}
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
    /*
     Enter the marks for the following subjects,
     IPC144: 77
     ULI101: 55
     EAC150: 82
     The average is: 71
     */
    
}