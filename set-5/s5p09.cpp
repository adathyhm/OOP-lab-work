#include <iostream>
using namespace std;

template <class T> class Result {
  T marks[5];

public:
  Result() {
    T sum = 0;
    for (int i = 0; i < 5; i++) {
      cout << "Enter the marks:";
      cin >> marks[i];
      sum += marks[i];
    }

    cout << "The total marks are: " << sum << endl;
  }

  T highestMarks() {
    T highest = marks[0];
    for (int i = 0; i < 5; i++) {
      if (marks[i] > highest) {
        highest = marks[i];
      }
    }
    return highest;
  }

  T lowestMarks() {
    T lowest = marks[0];
    for (int i = 0; i < 5; i++) {
      if (marks[i] < lowest) {
        lowest = marks[i];
      }
    }
    return lowest;
  }

  void averageMarks() {
    T sum = 0;
    for (int i = 0; i < 5; i++) {
      sum += marks[i];
    }
    cout << "The average marks is: " << sum / 5 << endl;
  }
};

int main() {
  Result<int> r1;
  cout << r1.highestMarks() << endl;
  cout << r1.lowestMarks() << endl;
  r1.averageMarks();

  return 0;
}
