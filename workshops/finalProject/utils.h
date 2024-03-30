/* Citation and Sources...
Final Project Milestone2
Module: utils.h
Filename: utils.h
Version 1.0
Author	Hsiao-Kang Chang
Revision 1
-----------------------------------------------------------
Date      Reason
2024/3/27  Preliminary release

-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my project milestones.
-----------------------------------------------------------
*/

#ifndef FINALPROJECT_UTILS_H
#define FINALPROJECT_UTILS_H
#include <stdio.h>
void fluKey();
void flushFile( FILE* fptr );
int getInt();
float getFlo();
void getLin(char line[]);
double getDbl(void);
void strCpy( char des[], const char src[] );
#endif //FINALPROJECT_UTILS_H
