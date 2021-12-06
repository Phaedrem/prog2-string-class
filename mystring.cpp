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
    int charCount = 0; 
    for(int i=0; i<length; i++){
        if(array[i] == requestedChar){
            charCount++;
        }
    }
    return charCount; 
}

void MyString::cat(const char* newText){
    int i = 0;
    int k = 0;
    while(newText[i] != '\0'){
        i++;
    }
    int newLength = (length+i);
    char *tempArray = new char[newLength+1];
    for(int i=0; i<length; i++){
        tempArray[i] = array[i];
    }
    for(int i=length; i<= newLength; i++){
        tempArray[i] = newText[k];
        k++;
    }
    delete[] array;
    array = tempArray;
    length = newLength;
}

void MyString::upper(bool caseRequest){
    if(caseRequest){
        for(int i=0; i<length; i++){
            if(array[i] >= 'a' && array[i] <= 'z'){
                array[i] = (array[i]-('a'-'A'));
            }
        }
    } else{
        for(int i=0; i<length; i++){
            if(array[i] >= 'A' && array[i] <= 'Z'){
                array[i] = (array[i]+('a'-'A'));
            }
        }
        if(array[0] >= 'a' && array[0] <= 'z'){
            array[0] = (array[0]-('a'-'A'));
        } else{
            int k = 0;
            while(((array[k] < 'A' || array[k] > 'Z') && (array[k] < 'a' || array[k] > 'z')) && k<length){
                if(array[k+1] >= 'a' && array[k+1] <= 'z'){
                    array[k+1] = (array[k+1]-('a'-'A'));
                }
                k++;
            }
        }
    }
}

void MyString::lower(bool caseRequest){
    if(caseRequest){
        for(int i=0; i<length; i++){
            if(array[i] >= 'A' && array[i] <= 'Z'){
                array[i] = (array[i]+('a'-'A'));
            }
        }
    } else{
        for(int i=0; i<length; i++){
            if(array[i] >= 'a' && array[i] <= 'z'){
                array[i] = (array[i]-('a'-'A'));
            }
        }
        if(array[0] >= 'A' && array[0] <= 'Z'){
            array[0] = (array[0]+('a'-'A'));
        } else{
            int k = 0;
            while(((array[k] < 'A' || array[k] > 'Z') && (array[k] < 'a' || array[k] > 'z')) && k<length){
                if(array[k+1] >= 'A' && array[k+1] <= 'Z'){
                    array[k+1] = (array[k+1]+('a'-'A'));
                }
                k++;
            }
        }
    }
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
    if((sub1 >= 0 && sub1 <= length) && (sub2 >= 0 && sub2 <= length) && length > 0){
        if(sub1 > sub2){
            swap(&sub1, &sub2);
        }
        int i = 0; 
        int newLength = ((sub2-sub1)+1);
        char *tempArray = new char[newLength+1];
        while((sub1 <= sub2) && i<newLength){
            tempArray[i] = array[sub1];
            i++; 
            sub1++;
        }
        tempArray[i] = '\0';
        if(replace){
            delete[] array;
            array = tempArray; 
            length = i; 
        }
        return tempArray;
    } else if(length <= 0){
        throw "a"; 
    } else{
        throw 0; 
    }
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
    for(int i=0; i<=length; i++){
        array[i] = newText[i];
    }
}