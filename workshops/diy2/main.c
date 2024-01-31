#include <stdio.h>

int getInt(void);
void rectangle(char leftTop, char topFill, char rightTop,
               char left, char right,
               char rightButtom, char fillButtom, char leftButtom,
               char fillScreen);

int main(void) {
    int counter = 0;
    int noOfDraws;
    char fillScreen = 'A';//make sure print A in input 1
    printf("How many Rectangles?\n");
    noOfDraws = getInt();
    while (counter < noOfDraws) {
        rectangle('+', '-', '+', '|','|', '+', '-', '+',fillScreen);
        fillScreen = fillScreen + 1;
        counter = counter + 1;
        printf("\n");
    }
    return 0;
}
