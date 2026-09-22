#include <iostream>
using namespace std;

class Numbers {
  int num1;
  int num2;

public:
  Numbers(int a, int b) {
    num1 = a;
    num2 = b;
  }

  friend int largestOfTwo(Numbers);
};

int largestOfTwo(Numbers n) { return n.num1 > n.num2 ? n.num1 : n.num2; }

int main() {

  Numbers n(5, 6);
  cout << largestOfTwo(n) << endl;

  return 0;
}
