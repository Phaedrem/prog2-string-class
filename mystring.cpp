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

MyString::MyString(const char* text){
    length = 0;
    while(text[length] != '\0'){
        length++;
    }
    array = new char[length+1];
    for(int i=0; i<length; i++){
        array[i] = text[i];
    }
    array[length] = '\0';
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

int MyString::getLength(){
    return length;
}

void MyString::set(){

}

void MyString::set(const char* newText){

}