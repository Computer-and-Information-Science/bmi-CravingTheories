/*
Carson Taylor
9/4/2025
*/

#include <iostream>
#include <cmath> // Used for pow function

using namespace std;

int main() { 

    double bmi; // BMI: Body Mass Index.
    int weight = 130; // The person's weight
    int height = 61; // The person's height

    bmi = (weight / pow(height, 2)) * 703;

    cout << "The BMI for this person is : " << bmi; // Display the BMI to the console
    
    return 0;

}
