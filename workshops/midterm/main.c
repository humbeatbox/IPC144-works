#include <stdio.h>
void equal(int i, int j);
int main() {
    printf("Start\n");
    equal(1, 2);
    equal(2, 1);
    equal(3, 3);
    printf("End\n");
    return 0;
}
void equal(int i, int j) {
    if(i < j){
        printf("%d is not equal to %d\n",i ,j);
    }else if(i > j) {
        printf("%d is not equal to %d\n", i, j);
    }else{
        printf("%d isequal to %d\n",i ,j);
    }
}