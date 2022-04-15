// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int year ;
    cout<< "Enter the year : ";
    cin>> year;
    
    if(year % 4 == 0 && year % 100 ==0) {
        cout << "Leap year";
    }else if(year % 400 == 0) {
         cout << "Leap year";
    }else {
         cout << "not Leap year";
    }

    return 0;
}