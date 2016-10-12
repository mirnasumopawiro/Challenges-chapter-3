//
//  7.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder goes to the movie distributor. Write a program that calculates a theater’s gross and net box office profit for a night. The program should ask for the name of the movie, and how many adult and child tickets were sold. (The price of an adult ticket is $10.00 and a child’s ticket is $6.00.) It should display a report


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const float ADULT_PRICE = 10.00;
    const float CHILD_PRICE = 6.00;
    int adultNumber;
    int childNumber;
    float totalAdult;
    float totalChild;
    float grossProfit;
    float netProfit;
    float distributor;
    string movieName;
    
    cout << "Enter the name of the movie: \n";
    getline (cin, movieName);
    cout << "How many adult tickets were sold?\n";
    cin >> adultNumber;
    cout << "How many child tickets were sold?\n";
    cin >> childNumber;
    
    totalAdult = ADULT_PRICE * adultNumber;
    totalChild = CHILD_PRICE * childNumber;
    grossProfit = totalAdult + totalChild;
    netProfit = grossProfit * 20 / 100;
    distributor = grossProfit - netProfit;
    
    cout << setprecision(2) << fixed;
    cout << "Movie name: " << setw(30) << movieName << endl;
    cout << "Adult tickets sold: " << setw(30) << adultNumber << endl;
    cout << "Child tickets sold: " << setw(30) << childNumber << endl;
    cout << "Gross box office profit: " << setw(5) << "$" << grossProfit << endl;
    cout << "Net box offive profit: " << setw(10) << "$" << netProfit << endl;
    cout << "Amount paid to distributor: " << setw(5) << "$" << distributor << endl;
    
    return 0;
}