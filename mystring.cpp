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
    length = -1;
    clear();
}   

MyString::MyString(const char* text){
    length = -1;
    set(text);
}

MyString::~MyString(){
    delete[] array; 
}




/*********************************
PRIVATE
*********************************/

void MyString::swap(int *number1, int *number2){
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}


/*********************************
PUBLIC
*********************************/

const char* MyString::getString(){
    return array; 
}

int MyString::getLength(){
    return length;
}

void MyString::clear(){
    if(length >= 0){
        delete[] array;
    }
    length = 0;
    array = new char[DEFAULTSIZE];
    array[length] = '\0';
}

void MyString::set(const char* newText){
    if(length >= 0){
        delete[] array;
    }
    length = 0;
    while(newText[length] != '\0'){
        length++;
    }
    array = new char[length+1];
    for(int i=0; i<length; i++){
        array[i] = newText[i];
    }
}