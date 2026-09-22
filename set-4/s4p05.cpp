#include <iostream>
#include <string>
using namespace std;

class Student {
  string name;
  static inline int count = 0;
  // static int count = 0;

public:
  Student(string n) {
    name = n;
    count++;
  }

  static void showCount() {
    cout << "The total number of students are: " << count << endl;
  }
};

// int Student::count = 0;

int main() {
  Student s1("cassie");
  Student s2("carl");
  Student s3("mike");

  Student::showCount();

  return 0;
}
