// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int num, rev =0, rem ;
    cout<< "Enter the num : ";
    cin>> num;
    
   while(num != 0) {
       rem = num % 10;
       rev = rev*10 + rem;
       num = num/10;
   }

 cout << "Reversed Number = " << rev;
    return 0;
}