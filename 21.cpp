//
//  21.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    float diameter;
    float radius;
    const int pi = 3.14159;
    float area;
    int slices;
    const float sliceArea = 14.125;
    int totalSlices;
    int totalPizza;
    int people;
    
    cout << "Enter the diameter of pizza in inches: ";
    cin >> diameter;
    cout << "Enter the number of people: ";
    cin >> people;
    
    radius = diameter / 2;
    area = pi * pow(radius, 2);
    slices = area / sliceArea;
    
    cout << slices << " slices may be taken from the pizza.\n";
    
    totalSlices = people * 4;
    totalPizza = totalSlices / slices;
    
    cout << "You should buy " << totalPizza << " pizzas.\n";
    
    return 0;
}