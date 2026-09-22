#include <iostream>
using namespace std;

class Interest {
  int principal, rate, time;

public:
  Interest(int p, int r, int t) {
    principal = p;
    rate = r;
    time = t;
  }

  inline double calculateSI() { return double(principal * rate * time) / 100; }
};

int main() {
  Interest loan(10000, 5, 2);
  cout << loan.calculateSI() << endl;

  return 0;
}
