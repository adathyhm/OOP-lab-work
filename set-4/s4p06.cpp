#include <iostream>
#include <string>
using namespace std;

class BankAccount {
  int accountNo;
  string customerName;
  static inline int totalAccounts = 0;

public:
  BankAccount(int a, string n) {
    accountNo = a;
    customerName = n;
    totalAccounts++;
  }

  void display() {
    cout << "The account number is: " << accountNo << endl;
    cout << "The account holder name is: " << customerName << endl;
  }

  static void totalAccountDisplay() {
    cout << "The total accounts created are: " << totalAccounts << endl;
  }
};

int main() {
  BankAccount b1(1001, "cassie");
  BankAccount b2(1002, "ajax");

  BankAccount::totalAccountDisplay();

  return 0;
}
