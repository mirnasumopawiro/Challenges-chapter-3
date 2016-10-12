//
//  10.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//
// Many financial experts advise that property owners should insure their homes or buildings for at least 80 percent of the amount it would cost to replace the structure. Write a program that asks the user to enter the replacement cost of a building and then displays the minimum amount of insurance he or she should buy for the property.


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int replacementCost;
    int insuranceCost;
    
    cout << "Please enter replacement cost ($)\n";
    cin >> replacementCost;
    
    insuranceCost = replacementCost * 80 / 100;
    
    cout << setprecision(2) << fixed;
    cout << "The minimum amount of insurance you should buy is $" << insuranceCost << endl;
    
    
    return 0;
}