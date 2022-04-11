// Online C++ compiler to run C++ program online

/*
In this file we see the c++ variable, declare variable, declare multiple variable

*/


/* In c++ their are some different type of variable.
int a = 55 , 
double b = 55.23, 
char ch ='a', 
string name = "mayur", 
bool isTrue = false.

*/
#include <iostream>
using namespace std;

int main() {
    int age = 22, brother = 1; //Declare Multiple Variables
    string name = "mayur";
    double height = 5.8;
    char gender = 'M';
    bool isFresher = true;
    
    cout <<" Hi, I am "<< name << " and my age is "<< age << ". I have "<< height <<" feet toll. my gender is "<< gender << " . I have "<< brother <<" brother and I'm fresher = "<< isFresher; 
  
    return 0;
}

//C++ Identifiers

/*

The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (like C++ keywords, such as int) cannot be used as names

*/
    