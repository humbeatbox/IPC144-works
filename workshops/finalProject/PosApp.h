/* Citation and Sources...
Final Project Milestone?
Module: PosApp.h
Filename: PosApp.h
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
#ifndef FINALPROJECT_POSAPP_H
#define FINALPROJECT_POSAPP_H

#include <stdio.h>

void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);
void loadItems(FILE* myfile);
void saveItem(FILE* myfile);

#endif //FINALPROJECT_POSAPP_H
