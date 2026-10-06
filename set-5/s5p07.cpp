#include <iostream>
using namespace std;

template <class T> class Pair {
  T x;
  T y;

public:
  Pair(T a, T b) {
    x = a;
    y = b;
  }

  T maxOfTwo() { return x > y ? x : y; }

  T minOfTwo() { return x > y ? y : x; }
};

int main() {
  Pair<int> p1(4, 5);
  Pair<double> p2(4.5, 5.67);
  cout << p1.maxOfTwo() << endl;
  cout << p2.minOfTwo() << endl;

  return 0;
}
