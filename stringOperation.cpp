#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Hello";
  cout << str;
  
    string fName = "John";
    string lName = "Doe";
    string full_Name = fName +" "+ lName;
     cout << "\n" <<full_Name;
     
    string fName2 = "Jon ";
    string lName2 = "gorge";
    string fullName = fName2.append(lName2);
    cout << "\n" <<fullName;
    
    string text = "this is string length example";
    cout << "The length of the string is: " << text.length();
    
    cout << "\n" << text[0]; 
    cout << "\n" <<  text[1]; 
    cout <<  "\n" << text[2]; 
    cout << "\n" <<  text[3]; 
    cout <<  "\n" << text[4]; 
    cout <<  "\n" << text[5]; 
    
    text[0] = ' ';
    text[1] = 'I';
    text[2] = 'T';
    text[3] = ' ';
    text[4] = ' ';
    
    cout << "\n\n" <<text;
    
    string name;
    cout << "\nfull name: ";
    cin >> name;
    cout << "Your name is: " << name;

  return 0;
}



//Omitting Namespace
/*
#include <iostream>
#include <string>

int main() {
  std::string greeting = "Hello";
  std::cout << greeting;
  return 0;
}
*/




