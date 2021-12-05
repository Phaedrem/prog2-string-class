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

int MyString::count(char requestedChar){
    return 0; 
}

void MyString::cat(const char* newText){

}

void MyString::upper(bool caseRequest){

}

void MyString::lower(bool caseRequest){
    
}

const char* MyString::reverse(bool replace){
    char *tempArray = new char[length+1];
    for(int i=(length-1); i>=0; i--){
        tempArray[(length-1)-i] = array[i];
    }
    tempArray[length] = '\0'; 
    if(replace){
        delete[] array;
        array = tempArray;
    }

    return tempArray; 
}

const char* MyString::substring(int sub1, int sub2, bool replace){
    
    return 0; 
}


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