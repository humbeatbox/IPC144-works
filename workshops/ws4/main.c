#include <stdio.h>
#include "utils.h"
#include "report.h"

int main(void) {
/*    int stdno[100] = { 0 };
    float mark[100] = { 0.0 };
    int num;
    printf("Enter number of the student records\n> ");
    num = getInt();
    printf("Enter %d student records:\n",num);
    readStudentInfo(stdno, mark, num);
    printReport(stdno, mark, num);
    return 0;*/
    int stdno[100] = { 0 };
    float mark[100] = { 0.0 };
    int num;
    printf("Enter number of the student records\n> ");
    num = getInt();
    readStudentInfo(stdno, mark, num);
    printReport(stdno, mark, num);
    return 0;
}

