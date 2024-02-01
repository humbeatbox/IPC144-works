#include <stdio.h>

int getInt(void);
/*void rectangle(char leftTop, char topFill, char rightTop,
               char left, char rightButtom, char fillButtom, char leftButtom,
               char right, char fillScreen);
*/

void rectangle(char leftTop, char top, char topRight,
char right, char rightButtom, char buttom,
char buttomLeft, char left, char fill,
int width, int height);


int main(void) {
    int counter = 0;
    int noOfDraws;
    int width;
    int height;
    char fillScreen = 'A';//make sure print A in input 1
    printf("How many Rectangles?\n");
    noOfDraws = getInt();
    /*printf("Width:\n> ");
    width = getInt();
    printf("Height:\n> ");
    height = getInt();*/
    while (counter < noOfDraws) {
        rectangle('+', '-', '+', '|','+', '-', '+', '|',fillScreen,width,height);
        fillScreen = fillScreen + 1;
        counter = counter + 1;
    }
    return 0;
}
