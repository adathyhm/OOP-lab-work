#include <iostream>
using namespace std;

class Marks {
  int arr[5];

public:
  Marks() {
    for (int i = 0; i < 5; i++) {
      cout << "Enter the marks of " << i + 1 << " student: ";
      cin >> arr[i];
    }
  }

  int findMax() {
    int maximum = arr[0];
    for (int i = 1; i < 5; i++) {
      if (arr[i] > maximum) {
        maximum = arr[i];
      }
    }
    return maximum;
  }

  void displayData() {
    for (int i = 0; i < 5; i++) {
      cout << "The marks of " << i + 1 << " is " << arr[i] << endl;
    }
  }
};

int main() {
  Marks m1;
  cout << "The maximum marks scored is: " << m1.findMax() << endl;
  m1.displayData();

  return 0;
}
