#include <iostream>
using namespace std;

class Maximum {
public:
  int max(int a, int b) { return a > b ? a : b; }

  int max(int a, int b, int c) {
    int largest = a;

    if (b > largest) {
      largest = b;
    }
    if (c > largest) {
      largest = c;
    }
    return largest;
  }

  float max(float a, float b) { return a > b ? a : b; }
};

int main() {
  Maximum n1;
  cout << n1.max(23, 54) << endl;
  cout << n1.max(23, 54, 77) << endl;
  cout << n1.max(17.3f, 56.4f) << endl;

  return 0;
}
