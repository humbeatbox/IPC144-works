#include <stdio.h>

int getInt(void);
void rectangle(char leftTop, char topFill, char rightTop,
               char left, char right,
               char rightButtom, char buttomFill, char leftButtom,
               char fillScreen);
               //int width, int height);

int main(void) {
    int counter = 0;
    int width;
    int height;
    int noOfDraws;
    char fillScreen = 'A';//make sure print A in input 1
    printf("How many Rectangles?\n> ");
    noOfDraws = getInt();
    while (counter < noOfDraws) {
        //printf("Rectange number %d:", counter + 1);
        rectangle('+', '-', '+', '|','|', '+', '-', '+',fillScreen);
        fillScreen = fillScreen + 1;
        counter = counter + 1;
        printf("\n");
    }
    return 0;
}
