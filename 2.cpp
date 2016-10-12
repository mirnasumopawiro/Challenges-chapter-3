//
//  stadium seating.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  There are three seating categories at a stadium. For a softball game, Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales. Format your dollar amount in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const float PRICE_A = 15.00;
    const float PRICE_B = 12.00;
    const float PRICE_C = 9.00;
    int ticketA;
    int ticketB;
    int ticketC;
    float totalA;
    float totalB;
    float totalC;
    float totalSales;
    
    cout << "How many tickets were sold for Class A?\n";
    cin >> ticketA;
    cout << "How many tickets were sold for Class B?\n";
    cin >> ticketB;
    cout << "How many tickets were sold for Class C?\n";
    cin >> ticketC;
    
    totalA = PRICE_A * ticketA;
    totalB = PRICE_B * ticketB;
    totalC = PRICE_C * ticketC;
    totalSales = totalA + totalB + totalC;
    
    cout << setprecision(2) << fixed;
    cout << "Income from Class A is $" << totalA << endl;
    cout << "income from Class B is $" << totalB << endl;
    cout << "Income from Class C is $" << totalC << endl;
    cout << "Total income is $" << totalSales << endl;
    
    

    return 0;
}