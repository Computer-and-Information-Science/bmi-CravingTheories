/*
Carson Taylor
9/4/2025
*/

#include <iostream>
#include <cmath> // Used for pow function

using namespace std;

int main() { 

    double bmi; // BMI: Body Mass Index.
    int weight; // The person's weight
    int height; // The person's height

    cout << "Enter your weight: ";
    cin >> weight; // Get the user input for weight in pounds

    cout << "Enter your height: ";
    cin >> height; // Get the user input for height in inches

    bmi = (weight / pow(height, 2)) * 703; // Calculate BMI without having to use kilograms or meters
    bmi = floor((bmi * 100) + .5) / 100; // Rounds BMI to two decimal places -- mainly to look nice

    cout << "Body Mass Index (BMI): " << bmi; // Display the BMI to the console
    
    return 0;

}
