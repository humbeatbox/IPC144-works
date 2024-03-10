#include <stdio.h>
void equal(int i, int j);
double listSum(double increment, double start, double end);
int main() {
    printf("Start\n");
    equal(1, 2);
    equal(2, 1);
    equal(3, 3);
    printf("End\n");

    printf("-------------------------------------------------------\n");
    double inc, star, end;
    printf("Enter a value to start with\n>");
    scanf("%lf",&star);

    printf("Enter the end value:\n>");
    scanf("%lf",&end);

    printf("Enter the increment value\n>");
    scanf("%lf",&inc);


    double sum = listSum(inc, star, end);
    printf("\n");
    printf("Sum of the numbers listed: %.1lf",sum);
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

double listSum(double increment, double start, double end){

    double sum = 0.0;
    double ret = 0.0;
    sum = start;
    ret = start;
    while( sum < end){
        if(sum < end){
            printf("%.1lf",sum);
        }
        sum = sum + increment;
        if(sum < end) {
            printf("-");
            ret = ret + sum;
        }
    }
    return ret;
}