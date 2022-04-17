#include <iostream>
#include <string>
using namespace std;

int main() {
    string cars[4] = {"tata", "jaguar", "mahindra", "wagnar"};
    cars[0] = "bmw";
    cout << cars[0] + "\n";
    for(int i=0; i<=3; ++i) {
            cout << "\n" + cars[i];
    }
  return 0;
}
