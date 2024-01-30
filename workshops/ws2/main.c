#include <stdio.h>



int getInt(void);//get the int from the user
double getDouble(void);//get the double from the user
double calculateAverageMark(void);

int main() {
    printf("Your average mark is %.1lf",calculateAverageMark());
    return 0;
}
