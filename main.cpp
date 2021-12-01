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
    cout << "The length of the string is " << myString2.getLength() << endl << endl;
    
    
    cout << "Emptying myString1" << endl; 
    myString1.set();
    cout << "The length of the tring in myString1 is now " << myString1.getLength() << endl << endl;

    cout << "Placing 'Otters Rock Socks' into myString2" << endl;
    myString2.set("Otters Rock Socks");
    cout << "The length of the string myString2 is now " << myString2.getLength() << endl << endl;




return 0;
}