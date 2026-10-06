#include <iostream>
using namespace std;

template <typename T> T largestOfTwo(T x, T y) { return x > y ? x : y; }

template <typename T> void swapTwoValues(T x, T y) {
  swap(x, y);
  cout << "The new value of x: " << x << endl;
  cout << "The new value of y: " << y << endl;
}

int main() {
  cout << largestOfTwo(3, 5) << endl;
  cout << largestOfTwo(3.5, 5.45) << endl;

  int x = 5;
  int y = 6;
  swapTwoValues(x, y);

  return 0;
}
