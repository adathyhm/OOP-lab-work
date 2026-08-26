#include <iostream>
using namespace std;

int linearSearch(int arr[], int len, int n) {
  for (int i = 0; i < len; i++) {
    if (arr[i] == n) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[] = {4, 2, 7, 8, 1, 2, 5};

  int len = sizeof(arr) / sizeof(arr[0]);
  int n;
  cout << "Enter a no.: ";
  cin >> n;

  cout << "Number found at index: " << linearSearch(arr, len, n) << endl;
  return 0;
}
