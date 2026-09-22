#include <iostream>
using namespace std;

class Area {
public:
  int calculateArea(int a) { return a * a; }

  int calculateArea(int a, int b) { return a * b; }

  double calculateArea(double r) { return 3.14 * r * r; }
};


int main(){
  Area a1;
  cout<<a1.calculateArea(4)<<endl;
  cout<<a1.calculateArea(4,5)<<endl;
  cout<<a1.calculateArea(4.5)<<endl;

  return 0;
}
