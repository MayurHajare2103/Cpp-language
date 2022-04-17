#include <iostream>
using namespace std;

int main() {
  string names[2][2] = {
    { "ram", "raj"},
    { "mayur", "raju"}
  };
  
  cout << names[0][2] + "\n ";
  
  for(int i = 0; i<2; i++) {
      for(int j = 0; j<2; j++) {
            cout<< "\n " + names[i][j];
        }
  }
  
  
  return 0;
}
