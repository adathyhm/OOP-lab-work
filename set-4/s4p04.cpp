#include <iostream>
using namespace std;

class Distance {
  int feet;
  int inches;

public:
  Distance(int f, int i) {
    feet = f;
    inches = i;
  }

  Distance operator+(Distance &d) {
    Distance d1(feet + d.feet, inches + d.inches);
    if (d1.inches >= 12) {
      d1.feet += d1.inches / 12;
      d1.inches = d1.inches % 12;
    }
    return d1;
  }

  void display() {
    cout << "The total distance is: " << feet << "ft " << inches << "in "
         << endl;
  }
};

int main() {
  Distance d1(6, 8);
  Distance d2(5, 9);

  Distance d3 = d1 + d2;
  d3.display();

  return 0;
}
