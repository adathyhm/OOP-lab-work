#include <iostream>
using namespace std;

class ArraySum {
  int arr[10];

public:
  ArraySum() {
    for (int i = 0; i < 10; i++) {
      cout << "Enter the " << i + 1 << " element: ";
      cin >> arr[i];
    }
  }

  int calculateSum() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
      sum = sum + arr[i];
    }
    return sum;
  }
};

int main() {
  ArraySum a1;
  cout << a1.calculateSum() << endl;

  return 0;
}
