#include <iostream>
using namespace std;

class Number {
  int num;

public:
  void input() {
    cout << "Enter the number to check if it is even or odd: ";
    cin >> num;
  }

  bool isEven() {
    if (num % 2 == 0) {
      return true;
    } else {
      return false;
    }
  }

  void displayResult() {
    if (isEven()) {
      cout << "The number is even." << endl;
    } else {
      cout << "The number is odd." << endl;
    }
  }
};

int main() {
  Number n1;
  n1.input();
  n1.displayResult();

  return 0;
}
