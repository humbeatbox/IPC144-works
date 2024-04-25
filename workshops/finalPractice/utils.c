#include "utils.h"
#include <stdio.h>

//for std struct item
struct Item readStdS(void){
    struct Item read;
    printf("Input Name\n");
    scanf("%s",read.name);
    printf("Input Grade\n");
    scanf("%d",&read.grade);
    return read;
}
void prtStdS(const struct Item pS){
    printf("Name is %s, Grade is %d\n",pS.name,pS.grade);
}
//

//for address of struct item
void readPtr(struct Item* rePtr){
    printf("Input new Name\n");
    scanf("%s",rePtr->name);
    printf("Input new Grade\n");
    scanf("%d",&(*rePtr).grade);
    //scanf("%d",(rePtr->grade));
}
void prnPtr(const struct Item* prPtr){
    printf("New Name is %s, New Grade is %d\n",prPtr->name,prPtr->grade);
}
//

//for a array of items
void readArray(struct Item arr[],int num){
    int i;
    for(i = 0;i<num;i++){
        //arr[i] = readStdS();
        //readPtr(&arr[i]);
        readPtr(&arr[i]);
    }
}
void prnArray(struct Item arr[],int num){
    int i;
    for(i = 0;i<num;i++){
        //prtStdS(arr[i]);
        //prnPtr(&arr[i]);
        prnPtr(&arr[i]);
    }
}