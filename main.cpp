/*********************
Name: Darren Bowers
Final Project
Purpose: Program to recreate string class similar to what is found in Python or C++. 
**********************/

#include "main.h"


int main(){
    cout << "Creating myString1 with 'Hello World'" << endl;
    MyString myString1("Hello World");
    cout << "The length of the string is " << myString1.getLength() << endl << endl;

    cout << "Creating myString2 an empty string" << endl;
    MyString myString2;
    cout << "The length of the string is " << myString2.getLength() << endl;








return 0;
}