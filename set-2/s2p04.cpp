#include <iostream>
#include <string>
using namespace std;

class Book {
  string title;
  string author;

public:
  Book(string a, string b) {
    title = a;
    author = b;
  }
  void displayData() {
    cout << "The title of this book is: " << title << endl;
    cout << "The author of this book is: " << author << endl;
  }
};

int main() {
  Book b1("Three mistakes", "adathyhm");
  b1.displayData();
  return 0;
}
