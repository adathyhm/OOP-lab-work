#include <iostream>
#include <vector>
using namespace std;

int maxOfArray(vector<int> &numbers) {
  int largest = numbers[0];
  for (int i = 1; i < numbers.size(); i++) {
    if (numbers[i] > largest) {
      largest = numbers[i];
    }
  }
  return largest;
}

int main() {
  int len;
  cout << "Enter the numbers of elements you want to add: ";
  cin >> len;
  vector<int> numbers(len);
  cout << "Enter " << len << " elements:" << endl;
  for (int i = 0; i < len; i++) {
    cin >> numbers[i];
  }

  cout << "The largest number of all is: " << maxOfArray(numbers) << endl;
  return 0;
}
