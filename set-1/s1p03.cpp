#include <iostream>
using namespace std;

long long int fact(int n) {
  if (n < 0) {
    return -1;
  }
  long long int result = 1;
  for (int i = 1; i <= n; i++) {
    result = result * i;
  }
  return result;
}

int main() {
  int a;
  cout << "Enter a number : ";
  cin >> a;

  cout << fact(a) << endl;
  return 0;
}
