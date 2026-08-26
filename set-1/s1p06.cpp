#include <iostream>
using namespace std;

int sumOfDigits(int n) {
  if (n < 0) {
    n = -n;
  }
  int sum = 0;
  while (n != 0) {
    int rem = n % 10;
    sum = sum + rem;
    n = n / 10;
  }
  return sum;
}

int main() {
  int a;
  cout << "Enter a number: ";
  cin >> a;
  cout << sumOfDigits(a) << endl;

  return 0;
}
