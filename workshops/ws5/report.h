//
// Created by Gary Chang on 2024-03-19.
//

#ifndef WS5_REPORT_H
#define WS5_REPORT_H
struct Student{
    float mark;  // to hold the mark of the student
    int stNo; // to hold the student number
    char name[31]; // to hold the student name up to 30 characters in a Cstring
};
//struct Student getStudent(void);
void getStudent(struct Student* std);
void readStudentInfo(struct Student[], int num);
void printReport(const struct Student S[], int num);

#endif //WS5_REPORT_H
