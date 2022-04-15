// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout <<"Enter any one character : "<< endl;
    cin >> ch;
   switch(ch) 
   {
        case 'a':
        case 'A':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'i':
        case 'I':
        case 'e':
        case 'E':
        cout<< "vowel";
         break;
        default :
        cout<< "not a vowel";
}
    return 0;
}