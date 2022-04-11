// Online C++ compiler to run C++ program online

/* 
user input 

*/
#include <iostream>
using namespace std;

int main() {
   float height;  // in m
   int weight;

    cout <<" Enter the height in m :  "<<endl;
    cin >> height;
    cout <<" Enter the weight in kg : "<<endl; 
    cin >> weight;
    
    //BMI formula ; BMI = mass (kg)/ height2 (m) ;
    
    float bmi = weight / (height * height);
    cout <<" Your Body Mass Index is : "<<bmi;
    
    return 0;
}

