//
//  average rainfall.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Write a program that calculates the average rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell each month. The program should display a message similar to the following: The average rainfall for June, July, and August is 6.72 inches.


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string month1;
    string month2;
    string month3;
    float amount1;
    float amount2;
    float amount3;
    float average;
    
    cout << "Enter the first month and the amount of rain that fell:\n";
    cin >> month1;
    cin >> amount1;
    
    cout << "Enter the second month and the amount of rain that fell:\n";
    cin >> month2;
    cin >> amount2;
    
    cout << "Enter the third month and the amount of rain that fell:\n";
    cin >> month3;
    cin >> amount3;
    
    average = (amount1 + amount2 + amount3) / 3;
    
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches.";
    
    return 0;
}