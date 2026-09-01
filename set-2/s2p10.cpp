#include <iostream>
#include <string>
using namespace std;

class Student {
  string name;
  int rollNo;
  int marks[5];

public:
  Student() {
    cout << "Enter the student's name: ";
    getline(cin, name);
    cout << "Enter the student's rollNo.: ";
    cin >> rollNo;

    for (int i = 0; i < 5; i++) {
      cout << "Enter the marks scored: ";
      cin >> marks[i];
    }
  }

  int totalMarks() {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
      sum = sum + marks[i];
    }
    return sum;
  }

  double percentage() { return totalMarks() * 0.2; }

  void grade() {
    if (percentage() >= 90) {
      cout << "A" << endl;
    } else if (percentage() >= 75) {
      cout << "B" << endl;
    } else if (percentage() >= 60) {
      cout << "C" << endl;
    } else if (percentage() >= 40) {
      cout << "D" << endl;
    } else {
      cout << "E" << endl;
    }
  }
};

int main() {
  Student s1;
  cout << s1.totalMarks() << endl;
  cout << s1.percentage() << endl;
  s1.grade();

  return 0;
}
