#include    <stdio.h>
#include    "utils.h"

int main(void){
/*
    struct Item item1;
    item1 = readStdS();
    prtStdS(item1);
    
    struct Item* ptrItem;
    ptrItem = &item1;

    printf("Now override it !!\n");
    readPtr(ptrItem);
    prnPtr(ptrItem);

    struct Item items[10];
    printf("Have an array here!!\n");
    readArray(items,2);
    prnArray(items,2);
*/
    FILE* myfile = fopen("data.csv","r");
    if (myfile){
        struct Item tmp;
        fscanf(myfile,"%[^,],%d",tmp.name,&tmp.grade);
        printf("DataName is %s, Data Grade is %d\n",tmp.name,tmp.grade);
    }else{
        printf("No file!!\n");
    }
    

    return 0;
}