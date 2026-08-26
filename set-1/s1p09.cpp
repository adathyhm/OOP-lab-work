#include <iostream>
#include <vector>
using namespace std;

int minOfArray(vector<int> &numbers) {
  int smallest = numbers[0];
  for (int i = 1; i < numbers.size(); i++) {
    if (numbers[i] < smallest) {
      smallest = numbers[i];
    }
  }
  return smallest;
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

  cout << "The smallest number of all is: " << minOfArray(numbers) << endl;
  return 0;
}
