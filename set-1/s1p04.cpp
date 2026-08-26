#include <iostream>
using namespace std;

int revNum(int n) {
  int reverseNum = 0;
  while (n != 0) {
    int r = n % 10;
    reverseNum = reverseNum * 10 + r;
    n = n / 10;
  }
  return reverseNum;
}

int main() {
  int a;
  cout << "Enter a number: ";
  cin >> a;
  cout << revNum(a) << endl;

  return 0;
}
