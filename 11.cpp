//
//  11.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//
//  Write a program that asks the user to enter the monthly costs for the following expenses incurred from operating his or her automobile: loan payment, insurance, gas, oil, tires, and maintenance. The program should then display the total monthly cost of these expenses, and the total annual cost of these expenses.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float loanPayment;
    float insurance;
    float gas;
    float oil;
    float tires;
    float maintenance;
    float totalMonthly;
    float totalAnnual;
    
    cout << "Please insert your: \n";
    cout << "Loan Payment: $";
    cin >> loanPayment;
    cout << "Insurance: $";
    cin >> insurance;
    cout << "Gas: $";
    cin >> gas;
    cout << "Oil: $";
    cin >> oil;
    cout << "Tires: $";
    cin >> tires;
    cout << "Maintenance: $";
    cin >> maintenance;
    
    totalMonthly = loanPayment + insurance + gas + oil + tires + maintenance;
    cout << "The total monthly cost is $" << totalMonthly << endl;
    
    totalAnnual = totalMonthly * 12;
    cout << "The total annual cost is $" << totalAnnual << endl;
    
    return 0;
}