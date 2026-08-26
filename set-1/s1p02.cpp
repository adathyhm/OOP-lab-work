#include <iostream>
using namespace std;

void checkPrime(int n) {
  if (n < 2) {
    cout << n << " - It is neither prime nor composite." << endl;
    return;
  }
  int count = 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
  }
  if (count > 0) {
    cout << "Number is not prime" << endl;

  } else {
    cout << "Number is prime" << endl;
  }
}

int main() {
  int a;
  cout << "Enter a number: ";
  cin >> a;
  checkPrime(a);
  return 0;
}
