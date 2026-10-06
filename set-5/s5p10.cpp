#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
  string name;
  int age;

  Person(string n, int a) {
    name = n;
    age = a;
  }

  void display() {
    cout << "The name is: " << name << endl;
    cout << "The age is: " << age << endl;
  }
};

class Teacher : public Person {
  string subject;
  double salary;

  Teacher(string n, int a, string sub, double s) : Person(n, a) {
    subject = sub;
    salary = s;
  }

  void display() {
    Person::display();
    cout << "The subject is: " << subject << endl;
    cout << "The salary is: " << salary << endl;
    cout << "===============================================" << endl;
  }
};

class ResearchScholar : public Person {
  string specialization;

  ResearchScholar(string n, int a, string s) : Person(n, a) {
    specialization = s;
  }

  void display() {
    Person::display();
    cout << "The specialization is: " << specialization << endl;
    cout << "===============================================" << endl;
  }
};

template <class T> class RecordManager {

};
