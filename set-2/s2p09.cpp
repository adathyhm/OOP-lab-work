#include <iostream>
using namespace std;

class BankAccount {
  int accountNumber;
  double balance;

public:
  BankAccount() {
    cout << "Enter the account no.: ";
    cin >> accountNumber;
    balance = 0;
  }
  void deposit(double amount) {
    if (amount <= 0) {
      cout << "Invalid deposit amount." << endl;
      return;
    }
    balance = balance + amount;
  }

  void withdraw(double amount) {
    if (amount <= 0) {
      cout << "Invalid withdraw amount." << endl;
      return;
    }
    if (balance - amount < 0) {
      cout << "Not enough balance" << endl;
      return;
    }
    balance = balance - amount;
  }

  void displayBalance() {
    cout << "The current balance is: " << balance << endl;
  }
};

int main() {
  BankAccount a1;
  a1.deposit(2000);
  a1.withdraw(1000);
  a1.displayBalance();
  a1.withdraw(5000);

  return 0;
}
