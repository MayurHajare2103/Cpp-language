// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int num ;
    cout<< "Enter the num : ";
    cin>> num;
    
    int factorial = 1;
    
    if(num > 0) {
        for (int i=1; i<=num; ++i) {
            factorial*=i ;
        }
        cout << "factorial : "<< factorial;
    }else {
         cout << "Please enter positive number.";
    }

    return 0;
}