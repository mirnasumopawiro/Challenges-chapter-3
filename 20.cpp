//
//  20.cpp
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
    
    cout << "Enter the diameter of pizza in inches: ";
    cin >> diameter;
    
    radius = diameter / 2;
    area = pi * pow(radius, 2);
    slices = area / sliceArea;
    
    cout << slices << " slices may be taken from the pizza.\n";
    
    return 0;
}