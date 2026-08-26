#include <climits>
#include <iostream>
using namespace std;

void secondLargest(int arr[], int len) {
  int largest = arr[0];
  int second_largest = INT_MIN;
  for (int i = 1; i < len; i++) {
    if (arr[i] > largest) {
      second_largest = largest;
      largest = arr[i];
    } else if (arr[i] < largest && arr[i] > second_largest) {
      second_largest = arr[i];
    }
  }
  cout << largest << endl;
  cout << second_largest << endl;
}

int main() {
  int arr[] = {1, 4, 5, 1, 9, 10, 15, 34};
  int len = sizeof(arr) / sizeof(arr[0]);
  secondLargest(arr, len);
  return 0;
}
