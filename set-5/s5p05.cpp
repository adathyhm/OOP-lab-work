#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
  string accountNumber;
  double balance;

public:
  Account(string a, double b) {
    accountNumber = a;
    balance = b;
  }

  virtual void display() {
    cout << "The Account Number is: " << accountNumber << endl;
    cout << "The Balance in this account is: " << balance << endl;
    cout << "===============================================" << endl;
  }
};

class SavingsAccount : public Account {
  double interestRate;

public:
  SavingsAccount(string a, double b, double i) : Account(a, b) {
    interestRate = i;
  }
  void display() override {
    cout << "The Savings Account Number is: " << accountNumber << endl;
    cout << "The Balance in this account is: " << balance << endl;
    cout << "The interest rate of this account is: " << interestRate << endl;
    cout << "===============================================" << endl;
  }
};

class CurrentAccount : public Account {

public:
  CurrentAccount(string a, double b) : Account(a, b) {}
  void display() override {
    cout << "The Current Account Number is: " << accountNumber << endl;
    cout << "The Balance in this account is: " << balance << endl;
    cout << "===============================================" << endl;
  };
};

int main() {
  SavingsAccount s1("1001", 5034.24, 3.5);
  SavingsAccount s2("1004", 100000, 1.5);
  s1.display();
  s2.display();

  return 0;
}
