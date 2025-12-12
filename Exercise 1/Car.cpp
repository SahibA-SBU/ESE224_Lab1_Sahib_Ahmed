#include "Car.h"
#include <iostream>
#include <iomanip>
using namespace std; 

// Default constructor 
Car::Car() : make(""), registrationNumber(""), startMiles(0.0), endMiles(0.0), costPerMile(0.0), renter("") {}
// Parameterized constructor 
Car::Car(const string& mk, const string& regNo, double start, double end, double cost, const string& r)
    : make(mk), registrationNumber(regNo), startMiles(start), endMiles(end), costPerMile(cost), renter(r) {}

//getters 
string Car::getMake() const { return make; }
string Car::getRegistrationNumber() const { return registrationNumber; }
double Car::getStartMiles() const { return startMiles; }
double Car::getEndMiles() const { return endMiles; }
double Car::getCostPerMile() const { return costPerMile; } 
string Car::getRenter() const { return renter; }

//setters 
void Car::setStartMiles(double start) { startMiles = start; }
void Car::setEndMiles(double end) { endMiles = end; }
void Car::setCostPerMile(double cost) { costPerMile = cost; }
void Car::setRenter(const string& renterName) { renter = renterName; }

//formulas
double Car::milesDriven() const { return endMiles - startMiles; }
double Car::tripCost() const { return milesDriven() * costPerMile; }

// display
void Car::printSummary() const {
    cout << "Make: " << make << '\n'
         << "Reg#: " << registrationNumber << '\n'
         << "Renter: " << renter << '\n'
         << "Miles: " << milesDriven() << '\n'
         << "Cost: $" << tripCost() << '\n'
         << "___________________________________\n";
}