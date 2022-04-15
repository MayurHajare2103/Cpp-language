// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout <<"Enter 1st character : "<< endl;
    cin >> a;
    cout <<"Enter 2nd character : "<< endl;
    cin >> b;
    cout <<"Enter 3rd character : "<< endl;
    cin >> c;
    
   if(a>b && b>c) {
       cout<< a << " is larger";
   }else if(b>a && b>c) {
       cout<< b << " is larger";
   }else {
       cout<< c << " is larger";
   }
    return 0;
}