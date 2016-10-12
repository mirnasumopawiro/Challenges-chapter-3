//
//  18.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//
//  


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    float principal;
    float rateInput;
    float rate;
    int time;
    float insideBracket;
    float amount;
    float interest;
    
    cout << "Please input the balance in  your account: $";
    cin >> principal;
    cout << "Please input the interest rate (%): ";
    cin >> rateInput;
    cout << "Please input the number of times the interest is compounded: ";
    cin >> time;
    
    rate = rateInput / 100;
    
    insideBracket = (rate / time) + 1;
    amount = principal * pow(insideBracket, time);
    interest = amount - principal;
    
    cout << setprecision(2) << fixed;
    cout << left << setw(20) << "Interest Rate " << rateInput << "%" << endl;
    cout << left << setw(20) << "Times Compounded" << time << endl;
    cout << left << setw(20) << "Principal"  << "$" << principal << endl;
    cout << left << setw(20) << "Interest"  << "$" << interest << endl;
    cout << left << setw(20) << "Amount in Savings"  << "$" << amount << endl;
    
    
    return 0;
}