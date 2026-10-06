#include <iostream>
#include <string>
using namespace std;

class Student {
  string name;
  int rollNo;
  int age;

public:
  Student(string n, int r, int a) {
    name = n;
    rollNo = r;
    age = a;
  }

  void display() {
    cout << "The name of student is: " << name << endl;
    cout << "The rollNo of student is: " << rollNo << endl;
    cout << "The age of student is: " << age << endl;
  }
};

class EngineeringStudent : public Student {
  string branch;
  int semester;

public:
  EngineeringStudent(string n, int r, int a, string b, int s)
      : Student(n, r, a) {
    branch = b;
    semester = s;
  }

  void display() {
    Student::display();
    cout << "The branch of student is: " << branch << endl;
    cout << "The semester of student is: " << semester << endl;
  }
};

int main() {
  EngineeringStudent s1("cassie", 21, 17, "CSE", 3);
  s1.display();

  return 0;
}
