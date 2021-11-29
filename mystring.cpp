/*********************
Name: Darren Bowers
Final Project
Purpose: Program to recreate string class similar to what is found in Python or C++. 
**********************/


#include "mystring.h"

/*********************************
CONSTRUCTORS / DESTRUCTORS
*********************************/
MyString::MyString(){
    length = DEFAULTSIZE;
    array = new char[length];
    array[length-1] = '\0';
}   

MyString::MyString(const char*){

}

MyString::~MyString(){
    delete[] array; 
}




/*********************************
PRIVATE
*********************************/








/*********************************
PUBLIC
*********************************/