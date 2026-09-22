#include <iostream>
using namespace std;

class Complex {
  int real;
  int imaginary;

public:
  Complex(int r, int i) {
    real = r;
    imaginary = i;
  }

  Complex operator+(Complex &c) {
    return Complex(real + c.real, imaginary + c.imaginary);
  }

  void display() {
    cout << "The complex no. is: " << real << " + " << imaginary << "i "
         << endl;
  }
};

int main() {
  Complex c1(3, 4);
  Complex c2(4, 7);

  Complex c3 = c1 + c2;
  c3.display();

  return 0;
}
