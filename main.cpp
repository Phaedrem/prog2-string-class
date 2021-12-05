/*********************
Name: Darren Bowers
Final Project
Purpose: Program to recreate string class similar to what is found in Python or C++. 
**********************/

#include "main.h"


int main(){
    cout << "Creating myString1 with \"Hello World\"" << endl;
    MyString myString1("Hello World");
    cout << "The length of the string is " << myString1.getLength() << endl << endl;

    cout << "Creating myString2 as an empty string" << endl;
    MyString myString2;
    cout << "The length of the string is " << myString2.getLength() << endl << endl;
    
    
    cout << "Emptying myString1" << endl; 
    myString1.clear();
    cout << "The length of the string in myString1 is now " << myString1.getLength() << endl << endl;

    cout << "Placing \"Otters Rock Socks\" into myString2" << endl;
    myString2.set("Otters Rock Socks");
    cout << "The length of the string myString2 is now " << myString2.getLength() << endl << endl;

    cout << "myString1 contains \"" << myString1.getString() << "\""<< endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl; 

    cout << "Reversing myString2 WITHOUT saving it " << endl; 
    cout << myString2.reverse() << endl << endl; 

    cout << "using getString to show that the original array has NOT changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl; 

    cout << "Reversing myString2 AND saving it " << endl; 
    cout << myString2.reverse(true) << endl << endl;

    cout << "using getString to show that the original array HAS changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl; 

    cout << "Reversing myString1 WITHOUT saving it " << endl; 
    cout << myString1.reverse() << endl << endl; 

    cout << "using getString to show that the original array has NOT changed" << endl; 
    cout << "myString1 contains \"" << myString1.getString() << "\""<< endl << endl;




return 0;
}