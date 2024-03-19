#include <stdio.h>
#include "utils.h"
#include "report.h"

int main(void) {
    struct Student std[100];
    int num;
    printf("Enter number of the student records\n> ");
    num = getInt();
    readStudentInfo(std, num);
    printReport(std, num);


    return 0;
}