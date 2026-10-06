#include <iostream>
#include <string>
using namespace std;

class Vehicle {
  int registrationNo;
  string company;

public:
  Vehicle(int r, string c) {
    registrationNo = r;
    company = c;
  }

  void display() {
    cout << "The vehicle's registration No. is: " << registrationNo << endl;
    cout << "The vehicle's company is: " << company << endl;
  }
};

class Car : public Vehicle {
  string fuelType;
  int engineCapacity;

public:
  Car(int r, string c, string f, int e) : Vehicle(r, c) {
    fuelType = f;
    engineCapacity = e;
  }

  void display() {
    Vehicle::display();
    cout << "The vehicle's fuel type is: " << fuelType << endl;
    cout << "The vehicle's engine capacity is: " << engineCapacity << endl;
    cout << "===============================================" << endl;
  }
};

class Bike : public Vehicle {
  string fuelType;
  int engineCapacity;

public:
  Bike(int r, string c, string f, int e) : Vehicle(r, c) {
    fuelType = f;
    engineCapacity = e;
  }

  void display() {
    Vehicle::display();
    cout << "The vehicle's fuel type is: " << fuelType << endl;
    cout << "The vehicle's engine capacity is: " << engineCapacity << endl;
    cout << "===============================================" << endl;
  }
};

int main() {
  Car c1(100, "toyota", "petrol", 2000);
  Bike b1(101, "honda", "pertol", 1200);

  b1.display();
  c1.display();

  return 0;
}
