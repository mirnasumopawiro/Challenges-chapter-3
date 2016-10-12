//
//  12.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//
//  Write a program that converts Celsius temperatures to Fahrenheit temperatures.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float celcius;
    float fahrenheit;
    
    cout << "Enter temperature in Celcius: \n";
    cin >> celcius;
    
    fahrenheit = ((9 * celcius) / 5) + 32;
    
    cout << "Temperature in Fahrenheit is " << fahrenheit << " degrees\n";
    
    
    return 0;
}