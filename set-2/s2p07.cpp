#include <iostream>
#include <string>
using namespace std;

class Employee {
  string employeeName;
  double basicSalary;

public:
  Employee() {
    cout << "Enter the employee name: ";
    getline(cin, employeeName);
    cout << "Enter basic salary: ";
    cin >> basicSalary;
  }
  double calculateHRA() { return 0.2 * basicSalary; }

  double calculateDA() { return 0.1 * basicSalary; }

  void displayGrossSalary() {
    cout << "Employee Name: " << employeeName << endl;
    cout << "The gross salary is: "
         << (basicSalary + calculateDA() + calculateHRA()) << endl;
  }
};

int main() {
  Employee e1;
  e1.displayGrossSalary();

  return 0;
}
