#include <iostream>
using namespace std;

class B;

class A {
  int a;

public:
  A(int num) { a = num; }

  friend int sumOf(A, B);
};

class B {
  int b;

public:
  B(int num) { b = num; }

  friend int sumOf(A, B);
};

int sumOf(A obj1, B obj2) { return obj1.a + obj2.b; }

int main() {
  A num1(5);
  B num2(10);

  cout << sumOf(num1, num2) << endl;

  return 0;
}
