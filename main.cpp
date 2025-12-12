#include "Car.h"
#include <iostream>
using namespace std;

int main(){
    // create Car object with parameterzed constructors
    Car car1("Toyota", "NY1234", 1000.0, 1200.0, 0.50, "Alice");

    //create Car object with default constructor, then use setters 
    Car car2; 
    car2.setRenter("Bob");
    car2.setStartMiles(2000.0);
    car2.setEndMiles(2500.0);
    car2.setCostPerMile(0.75);

    //print summaries 
    car1.printSummary();
    car2.printSummary();

    return 0;
}