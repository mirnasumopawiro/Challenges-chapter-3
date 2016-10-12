//
//  main.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Write a program that calculates a car’s gas mileage. The program should ask the user to enter the number of gallons of gas the car can hold and the number of miles it can be driven on a full tank. It should then display the number of miles that may be driven per gallon of gas.

#include <iostream>
using namespace std;

int main() {
    
    int gallonGas;
    int milesFullTank;
    float milesPerGallon;
    
    cout << "Enter the number of gallons of gas the car can hold: " << endl;
    cin >> gallonGas;
    cout << "Enter the number of miles the car can be driven on a full tank: " << endl;
    cin >> milesFullTank;
    
    milesPerGallon = milesFullTank / gallonGas;
    
    cout << "The number of miles that may be driven per gallon of gas is " << milesPerGallon << " miles\n";
    
    return 0;
}
