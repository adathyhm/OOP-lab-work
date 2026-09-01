#include <iostream>
using namespace std;

class Rectangle {
  double length;
  double breadth;

public:
  void input() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
  }

  double calculateArea() { return length * breadth; }

  void displayArea() {
    cout << "The area of rectangle is: " << calculateArea() << endl;
  }
};

int main() {
  Rectangle r1;
  r1.input();
  r1.displayArea();

  return 0;
}
