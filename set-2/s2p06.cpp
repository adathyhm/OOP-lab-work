#include <iostream>
#include <string>
using namespace std;

class Text {
  string str;

public:
  Text() {
    cout << "Enter a string: ";
    getline(cin, str);
  }

  int lengthOfString() {
    int i = 0;
    while (str[i] != '\0') {
      i++;
    }
    return i;
  }
};

int main() {
  Text t1;
  cout << t1.lengthOfString() << endl;

  return 0;
}
