/*********************
Name: Darren Bowers
Final Project
Purpose: Program to recreate string class similar to what is found in Python or C++. 
**********************/

#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>     /* cout, endl */

class MyString {
public:
    MyString(); 
    MyString(const char*);
    ~MyString();

private:
    int length;

};

#endif
