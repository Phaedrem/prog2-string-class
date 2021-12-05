/*********************
Name: Darren Bowers
Final Project
Purpose: Program to recreate string class similar to what is found in Python or C++. 
**********************/

#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>     /* cout, endl */

#define DEFAULTSIZE 1

class MyString {
public:
    MyString(); 
    MyString(const char*);
    ~MyString();
    int getLength();
    void clear();
    void set(const char*);
    const char* getString();
    void upper(bool);
    void lower(bool);
    const char* reverse(bool);
    const char* substring(bool);

private:
    int length;
    char *array;
    void swap(int*, int*);

};

#endif
