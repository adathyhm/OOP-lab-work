#include <iostream>
using namespace std;

int isPalindrome(int n) {
  int n1 = n;
  int revNum = 0, remainder;
  while (n1 != 0) {
    remainder = n1 % 10;
    revNum = revNum * 10 + remainder;
    n1 = n1 / 10;
  }
  return n == revNum;
}
int main() {
  int a;
  cout << "Enter a number to check if it is palindrome: ";
  cin >> a;
  cout << isPalindrome(a) << endl;

  return 0;
}
