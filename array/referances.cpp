#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "puran poli";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";
//pointers
  string* ptr = &food; 
  cout << &food << "\n";
  cout << ptr << "\n";

  return 0;
}
