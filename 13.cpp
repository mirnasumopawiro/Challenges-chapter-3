//
//  13.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//
//  Write a program that will convert U.S. dollar amounts to Japanese yen and to euros, storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_ DOLLAR. To get the most up-to-date exchange rates, search the Internet using the term “currency exchange rate”. If you cannot find the most recent exchange rates, use the following: 1 Dollar = 98.93yen = 0.74euro

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const float YEN_PER_DOLLAR = 98.93;
    const float EUROS_PER_DOLLAR = 0.74;
    float dollar;
    float dollarToYen;
    float dollarToEuros;
    
    cout << "Insert amount of U.S dollar: $";
    cin >> dollar;
    
    dollarToYen = dollar * YEN_PER_DOLLAR;
    dollarToEuros = dollar * EUROS_PER_DOLLAR;
    
    cout << "Yen: " << dollarToYen << endl;
    cout << "Euros " << dollarToEuros << endl;
    
    return 0;
}