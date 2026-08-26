#include <iostream>
using namespace std;

int occurrenceInArray(int arr[], int len, int n) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] == n) {
      count++;
    }
  }
  return count;
}

int main() {
  int arr[] = {2, 5, 67, 2, 3, 5, 2, 50, 10};
  int len = sizeof(arr) / sizeof(arr[0]);
  int n;
  cout << "Enter a value: ";
  cin >> n;
  cout << "Number of occurrence: " << occurrenceInArray(arr, len, n) << endl;
  return 0;
}
