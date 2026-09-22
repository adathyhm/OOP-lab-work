#include <iostream>
#include <string>
using namespace std;

class Book {
  int bookId;
  string bookName;
  double price;
  static inline int bookCounter = 0;

public:
  Book(int id, string n, double p) {
    bookId = id;
    bookName = n;
    price = p;
    bookCounter++;
  }

  inline void discountPrice() {
    int discount = price * 0.1;
    cout << "The price after discount(10%) is: " << price - discount << endl;
  }

  bool operator>(Book b) { return price > b.price; }

  friend void displayCostlier(Book, Book);

  static void displayTotalBooks() {
    cout << "The total number of books are: " << bookCounter << endl;
  }
};

void displayCostlier(Book b1, Book b2) {
  Book costlier = b1 > b2 ? b1 : b2;
  cout << "The id of the costlier book is: " << costlier.bookId << endl;
  cout << "The name of the costlier book is: " << costlier.bookName << endl;
  cout << "The price of the costlier book is: " << costlier.price << endl;
  cout << "===============================================" << endl;
}

int main() {
  Book b1(100, "I might kill you", 500);
  Book b2(101, "Die man Die", 1500);

  displayCostlier(b1, b2);

  b1.discountPrice();
  b2.discountPrice();
  Book::displayTotalBooks();

  return 0;
}
