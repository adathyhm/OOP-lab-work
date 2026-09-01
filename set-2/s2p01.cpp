#include <iostream>
#include <string>
using namespace std;

class Student {
  string name;
  int rollNo;

public:
  void setData(string a, int b) {
    name = a;
    rollNo = b;
  }

  void displayData() {
    cout << "The student name is: " << name << endl;
    cout << "The student rollno is: " << rollNo << endl;
  }
};

int main() {
  Student s1;
  s1.setData("Aman", 5);
  s1.displayData();
  return 0;
}
