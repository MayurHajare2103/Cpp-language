#include <iostream>
#include <string>
using namespace std;

struct student {
  string name;
  string address;
  int id;
};

int main() {
  student student1;
  student1.name = "mayur";
  student1.address = "mumbai";
  student1.id = 102;

  student student2;
  student2.name = "raj";
  student2.address = "pune";
  student2.id = 103;
 
  cout << student1.name << " " << student1.address << " " << student1.id << "\n";
  cout << student2.name << " " << student2.address << " " << student2.id << "\n";
 
  return 0;
}
