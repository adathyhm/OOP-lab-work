#include <iostream>
#include <string>
using namespace std;

class Book {
  string title;
  string author;

public:
  Book(string t, string a) {
    title = t;
    author = a;
  }

  void display() {
    cout << "The title of the book is: " << title << endl;
    cout << "The author of the book is: " << author << endl;
  }
};

class Ebook : public Book {
  int fileSize;
  string fileFormat;

public:
  Ebook(string t, string a, int fs, string ff) : Book(t, a) {
    fileSize = fs;
    fileFormat = ff;
  }

  void display() {
    Book::display();
    cout << "The file size of the book is: " << fileSize << endl;
    cout << "The file format of the book is: " << fileFormat << endl;
    cout << "=================================================" << endl;
  }
};

int main() {
  Ebook ebooks[3] = {Ebook("Physics", "HCV", 120, "text"),
                     Ebook("The way you smile", "Toram", 100, "markdown"),
                     Ebook("five nights in pune", "MC Stan", 50, "text")};

  for (int i = 0; i < 3; i++) {
    ebooks[i].display();
  }
}
