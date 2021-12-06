/*********************
Name: Darren Bowers
Final Project
Purpose: Program to recreate string class similar to what is found in Python or C++. 
**********************/

#include "main.h"


int main(){
    cout << "~~~~~~~~~~~~ Constructors ~~~~~~~~~~~~~~" << endl << endl;

    cout << "Creating myString1 with \"Hello World\"" << endl;
    MyString myString1("Hello World");
    cout << "The length of the string is " << myString1.getLength() << endl; 
    cout << "myString1 contains \"" << myString1.getString() << "\""<< endl << endl; 

    cout << "Creating myString2 as an empty string" << endl;
    MyString myString2;
    cout << "The length of the string is " << myString2.getLength() << endl;
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl;
    
    cout << "~~~~~~~~~~~~~~ Clear and Set ~~~~~~~~~~~~~~" << endl << endl; 
 
    cout << "Emptying myString1" << endl; 
    myString1.clear();
    cout << "The length of the string in myString1 is now " << myString1.getLength() << endl << endl;

    cout << "Placing \"Hello World\" into myString2" << endl;
    myString2.set("Hello World");
    cout << "The length of the string myString2 is now " << myString2.getLength() << endl << endl;

    cout << "myString1 contains \"" << myString1.getString() << "\""<< endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl; 

    cout << "~~~~~~~~~~~~~~ Reverse ~~~~~~~~~~~~~~" << endl << endl; 

    cout << "Reversing myString2 WITHOUT saving it " << endl; 
    cout << myString2.reverse() << endl << endl; 

    cout << "Using getString to show that the original array has NOT changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl; 

    cout << "Reversing myString2 AND saving it " << endl; 
    cout << myString2.reverse(true) << endl << endl;

    cout << "Using getString to show that the original array HAS changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl; 

    cout << "Putting it back " << endl; 
    cout << myString2.reverse(true) << endl << endl;

    cout << "Reversing myString1 WITHOUT saving it " << endl; 
    cout << myString1.reverse() << endl << endl; 

    cout << "Using getString to show that the original array has NOT changed" << endl; 
    cout << "myString1 contains \"" << myString1.getString() << "\""<< endl << endl;

    cout << "~~~~~~~~~~~~~~ Substring ~~~~~~~~~~~~~~" << endl << endl; 

    cout << "Testing myString2.substringe - just one letter, both IN range, smaller number first, not saving changes" << endl;
    try{
        cout << myString2.substring(0,0) << endl;    
    } catch(int a){
        cout << "Error, requested index[s] out of range" << endl;
    } catch(...){
        cout << "Error, string is empty" << endl; 
    }

    cout << "Using getString to show that the original array has NOT changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl; 

    cout << "Testing myString2.substringe - 3 letters, IN range, smaller number first, not saving changes" << endl;
    try{
        cout << myString2.substring(1,3) << endl;    
    } catch(int a){
        cout << "Error, requested index[s] out of range" << endl;
    } catch(...){
        cout << "Error, string is empty" << endl; 
    }

    cout << "Using getString to show that the original array has NOT changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl;

    cout << "Testing myString2.substringe - 3 letters, IN range, larger number first, not saving changes" << endl;
    try{
        cout << myString2.substring(3,1) << endl;    
    } catch(int a){
        cout << "Error, requested index[s] out of range" << endl;
    } catch(...){
        cout << "Error, string is empty" << endl; 
    }

    cout << "Using getString to show that the original array has NOT changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl;

    cout << "Testing empty myString1.substringe" << endl;
    try{
        cout << myString1.substring(3,1) << endl;    
    } catch(int a){
        cout << "Error, requested index[s] out of range" << endl;
    } catch(...){
        cout << "Error, string is empty" << endl; 
    }

    cout << "Using getString to show that the original array has NOT changed" << endl; 
    cout << "myString1 contains \"" << myString1.getString() << "\""<< endl << endl;


    cout << "Testing myString2.substringe - 3 letters, IN range, minimum out of range, NOT saving changes" << endl;
    try{
        cout << myString2.substring(-1,3) << endl;    
    } catch(int a){
        cout << "Error, requested index[s] out of range" << endl;
    } catch(...){
        cout << "Error, string is empty" << endl; 
    }

    cout << "Using getString to show that the original array has NOT changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl;

    cout << "Testing myString2.substringe - 3 letters, IN range, maximum out of range, NOT saving changes" << endl;
    try{
        cout << myString2.substring(0,12) << endl;    
    } catch(int a){
        cout << "Error, requested index[s] out of range" << endl;
    } catch(...){
        cout << "Error, string is empty" << endl; 
    }

    cout << "Using getString to show that the original array has NOT changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl;

    cout << "Testing myString2.substringe - 3 letters, IN range, larger number first, SAVING changes" << endl;
    try{
        cout << myString2.substring(3,1,true) << endl;    
    } catch(int a){
        cout << "Error, requested index[s] out of range" << endl;
    } catch(...){
        cout << "Error, string is empty" << endl; 
    }

    cout << "Using getString to show that the original array HAS changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl;
    cout << "The length of the string is " << myString2.getLength() << endl << endl;

    cout << "Testing myString2.substringe - 1 letter, IN range, SAVING changes" << endl;
    try{
        cout << myString2.substring(0,0,true) << endl;    
    } catch(int a){
        cout << "Error, requested index[s] out of range" << endl;
    } catch(...){
        cout << "Error, string is empty" << endl; 
    }

    cout << "Using getString to show that the original array HAS changed" << endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl;
    cout << "The length of the string is " << myString2.getLength() << endl << endl;

    cout << "Resetting myString2 to \"Hello World\"" << endl;
    myString2.set("Hello World");
    cout << "The length of the string myString2 is now " << myString2.getLength() << endl << endl;

    cout << "myString1 contains \"" << myString1.getString() << "\""<< endl; 
    cout << "myString2 contains \"" << myString2.getString() << "\""<< endl << endl; 

return 0;
}