#include <iostream>
#include <string>
using namespace std;

class Employee {

  int employeeId;
  string name;

public:
  Employee(int e, string n) {
    employeeId = e;
    name = n;
  }

  void display() {
    cout << "The Employee's ID is: " << employeeId << endl;
    cout << "The Employee's name is: " << name << endl;
  }
};

class Manager : public Employee {
  string department;
  double salary;

public:
  Manager(int e, string n, string d, double s) : Employee(e, n) {
    department = d;
    salary = s;
  }

  void display() {
    Employee::display();
    cout << "The Employee's department is: " << department << endl;
    cout << "The Employee's salary is: " << salary << endl;
    cout << "---------------------------------------------" << endl;
  }
};

int main() {
  Manager managers[5] = {
      Manager(1, "alice", "HR", 50000), Manager(2, "cassie", "HR", 10000),
      Manager(3, "leon", "HR", 5000000), Manager(4, "ada", "PR", 70000),
      Manager(5, "Carl", "PR", 5643234)};

  for (int i = 0; i < 5; i++) {
    managers[i].display();
  }

  return 0;
}
