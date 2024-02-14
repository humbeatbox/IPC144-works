#include <stdio.h>
#include "utils.h"
#include "marks.h"
#include "report.h"

int main(void) {
    int noOfStds = getNoOfStudents();
    while (noOfStds == 0) {
        noOfStds = getNoOfStudents();
    }
    report(noOfStds);

    return 0;



}


