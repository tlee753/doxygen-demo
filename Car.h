/*!
 * contains the header for the car class
 *
 * @file Car.h
 */

#include <string>

using namespace std;

#ifndef CAR_H
#define CAR_H

/*!
 * represents a car with an make, model, year, and cost
 *
 * @author tlee753
 * @version 1.0
 */
class Car {
    private:
        //! the make of the car
        string make;
        //! the model of the car
        string model;
        //! the year the car was made
        int year;
        //! the cost of the car
        int cost;
    
    public:
        Car(string make, string model, int year, int cost);
        bool highClass();
};

#endif