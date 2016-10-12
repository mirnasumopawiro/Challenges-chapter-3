//
//  22.cpp
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
    float angle;
    float sinAngle;
    float cosAngle;
    float tanAngle;
    
    cout << "Enter an angle in radians: ";
    cin >> angle;
    
    sinAngle = sin(angle);
    cosAngle = cos(angle);
    tanAngle = tan(angle);
    
    cout << setprecision(4) << fixed;
    cout << "The sine is " << sinAngle << endl;
    cout << "The cosine is " << cosAngle << endl;
    cout << "The tangent is " << tanAngle << endl;
    
    
    return 0;
}