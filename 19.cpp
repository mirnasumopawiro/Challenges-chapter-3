//
//  19.cpp
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
    
    float rateInput;
    float rate;
    float loan;
    int numberPayment;
    float amountPaid;
    float numerator;
    float denominator;
    float bracket;
    float payment;
    float interest;
    
    cout << "Input rate (%): ";
    cin >> rateInput;
    cout << "Input number of payments: ";
    cin >> numberPayment;
    cout << "Input amount of loan: $";
    cin >> loan;
    
    rate = rateInput / 100;
    bracket = 1 + rate;
    numerator = rate * pow (bracket, numberPayment);
    denominator = pow(bracket, numberPayment) - 1;
    payment = (numerator / denominator) * loan;
    
    interest = payment * numberPayment;
    amountPaid = loan + interest;
    
    cout << setprecision(2) << fixed;
    cout << left << setw(30) << "Loan amount:" << "$" << loan << endl;
    cout << left << setw(30) << "Monthly Interest Rate:" << "$" << rateInput << "%" << endl;
    cout << left << setw(30) << "Number of Payments:" << numberPayment << endl;
    cout << left << setw(30) << "Monthly Payment:" << "$" << payment << endl;
    cout << left << setw(30) << "Amount Paid Back:" << "$" << amountPaid << endl;
    cout << left << setw(30) << "Interest Paid:" << "$" << interest << endl;
    
    return 0;
}