#ifndef seneca_utils_h
#define seneca_utils_h

struct Item{
    char name[41];
    int grade;
};

struct Item readStdS(void);
void prtStdS(const struct Item pS);

void readPtr(struct Item* rePtr);
void prnPtr(const struct Item* prPtr);

//void readArray(struct Item arr[],int num);
//void prnArray(struct Item arr[],int num);

void readArray(struct Item arr[],int num);
void prnArray(struct Item arr[],int num);
#endif
