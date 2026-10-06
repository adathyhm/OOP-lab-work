#include <iostream>
using namespace std;

template <class T> class Array {
  T arr[5];

public:
  Array() {
    for (int i = 0; i < 5; i++) {
      cout << "Enter the value: ";
      cin >> arr[i];
    }
  }

  void display() {
    for (int i = 0; i < 5; i++) {
      cout << "The value are: " << arr[i] << endl;
    }
  }

  T largestElement() {
    T max = arr[0];
    for (int i = 0; i < 5; i++) {
      if (arr[i] > max) {
        max = arr[i];
      }
    }

    return max;
  }
  T smallestElement() {
    T min = arr[0];
    for (int i = 0; i < 5; i++) {
      if (arr[i] < min) {
        min = arr[i];
      }
    }

    return min;
  }

  T average() {
    T sum = 0;
    for (int i = 0; i < 5; i++) {
      sum += arr[i];
    }

    return sum;
  }
};

int main() {
  Array<int> a1;
  a1.display();
  cout << a1.largestElement() << endl;
  cout << a1.smallestElement() << endl;
  cout << a1.average() << endl;

  return 0;
}
