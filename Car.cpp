/*!
 * contains function definitions for car class
 *
 * @file Car.cpp
 */

#include <string>
#include "Car.h"

using namespace std;
    
/*!
 * constructor
 *
 * @param make the make of the car
 * @param model the model of the car
 * @param year the year the car was made
 * @param cost the cost of the car
 */
Car::Car(string make, string model, int year, int cost) {
    this->make = make;
    this->model = model;
    this->year = year;
    this->cost = cost;
}

/*!
 * tells whether or not the car is top quality
 *
 * @return whether or not the car is high class
 */
bool Car::highClass() {
    return (cost > 100000);
}
