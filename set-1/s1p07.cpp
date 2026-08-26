#include <iostream>
using namespace std;

void fibonacci(int n) {
  int n1 = 0, n2 = 1;
  if (n <= 0) {
    return;
  }
  if (n == 1) {
    cout << n1 << endl;
    return;
  }
  cout << n1 << " " << n2;
  for (int i = 3; i <= n; i++) {
    int n3 = n1 + n2;
    cout << " " << n3;
    n1 = n2;
    n2 = n3;
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Enter the number of terms: ";
  cin >> n;
  fibonacci(n);
  return 0;
}
