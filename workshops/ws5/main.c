#include <stdio.h>
#include "utils.h"
#include "report.h"

int main(void) {
    struct Student std[100];
    int num;
    printf("Enter number of the student records\n> ");
    num = getInt();
    //readStudentInfo(std, num);
    int i;
    for (i = 0; i < num; i++) {
        std[i] = getStudent();
    }
    //std[i] = getStudent();
    printReport(std, num);
    //printf("Average:%d",);
    return 0;
}