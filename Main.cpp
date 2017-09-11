/*!
 * contains main function to run entire program
 *
 * @file Main.cpp
 */

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

/*!
 * main function that runs the program
 *
 * @return the program error code
 */
int main() 
{
    cout << "Program Starting...\n";

    Car mustang("Ford", "Mustang", 2010, 120000);
    cout << mustang.highClass() << endl;

    cout << "Program End.\n";
    return 0;
}
