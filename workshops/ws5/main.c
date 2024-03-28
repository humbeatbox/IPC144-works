#include <stdio.h>
#include "utils.h"
#include "report.h"
void flushFile( FILE* fptr ) {
    char ch=0;
    while ( ch != '\n' ) {
        fscanf( fptr, "%c", &ch );
    }
}
void readFile();

int main(void) {
//    struct Student std[100];
//    int num;
//    printf("Enter number of the student records\n> ");
//    num = getInt();
//    readStudentInfo(std, num);
//    printReport(std, num);
    readFile();
    return 0;
}

void readFile(){
    //struct Student* std;
    //struct Student std;
    char str[100]="";
//    int x;
//    double y;
    struct damnNumber{
        int isInt;
        double isDlb;
        char name[41];
    };

    struct damnNumber num1;
    struct damnNumber* num2;
    num2 = &num1;
    //data type is Yen Hsuan,456456,99,22
    //FILE* stdRcord = fopen("stdData.txt","r");
    //fscanf(stdRcord,"%s,%d,%f",std->name,&std->stNo,&std->mark);
//    fscanf(stdRcord,"%s,%d,%f",str,&std.stNo,&std.mark);
//    printf( "%s- x: %d, y: %f\n",str,std.stNo,std.mark);

//    fscanf(stdRcord,"%s,%d,%f",str,&x,&y);
//    printf( "%s- x: %d, y: %f\n",str,x,y);

    //fscanf(stdRcord,"%[^\n]",str);
    FILE* myfile = fopen( "test.csv", "r" );
    if ( myfile ) {
//        while ( fscanf( myfile, "%d,%lf", &x, &y ) == 2 ) {
//            flushFile( myfile );
//            printf( "- x: %d, y: %.2lf\n",x,y);

//        while ( fscanf( myfile, "%d,%lf", &num1.isInt, &num1.isDlb ) == 2 ) {
//        flushFile( myfile );
//        printf( "- x: %d, y: %.2lf\n",num1.isInt, num1.isDlb);
        //fscanf( myfile, "%d,%lf", &num2->isInt, &num2->isDlb );
//        while ( fscanf( myfile, "%s,%d,%lf",&num2->name, &num2->isInt, &num2->isDlb ) == 3 ) {
//            flushFile( myfile );
//            printf( "name: %s  - x: %d, y: %.2lf\n",num2->name,num1.isInt, num1.isDlb);
//        }
        fclose( myfile );
    }
    //fclose(stdRcord);

    struct Student {
        int roll_no;
        char name[30];
        char branch[40];
        int batch;
    };
    struct Student s, *ptr;


    ptr = &s;
    // Taking inputs
    printf("Enter the Roll Number of Student\n");
    scanf("%d", &ptr->roll_no);
    printf("Enter Name of Student\n");
    scanf("%s", &ptr->name);
    printf("Enter Branch of Student\n");
    scanf("%s", &ptr->branch);
    printf("Enter batch of Student\n");
    scanf("%d", &ptr->batch);

    // Displaying details of the student
    printf("\nStudent details are: \n");

    printf("Roll No: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Branch: %s\n", ptr->branch);
    printf("Batch: %d\n", ptr->batch);

}