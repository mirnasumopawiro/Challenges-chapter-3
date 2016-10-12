//
//  14.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//
//  A retail company must file a monthly sales tax report listing the sales for the month and the amount of sales tax collected. Write a program that asks for the month, the year, and the total amount collected at the cash register (that is, sales plus sales tax). Assume the state sales tax is 4 percent and the county sales tax is 2 percent.
//  If the total amount collected is known and the total sales tax is 6 percent, the amount of product sales may be calculated as:

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string month;
    string year;
    float totalAmount;
    float productSales;
    float totalTax;
    float stateTax;
    float countyTax;
    
    cout << "Please enter month: ";
    cin >> month;
    cout << "Please enter the year: ";
    cin >> year;
    cout << "Please enter total amount at the cash register: $";
    cin >> totalAmount;
    
    productSales = totalAmount / 1.06;
    totalTax = totalAmount - productSales;
    stateTax = productSales * 4 /100;
    countyTax = productSales * 2 / 100;
    
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;
    cout << setprecision(2) << fixed;
    cout << "Total collected: $" << totalAmount << endl;
    cout << "Sales: $" << productSales << endl;
    cout << "County Sales Tax: $" << countyTax << endl;
    cout << "State Sales Tax: $" << stateTax << endl;
    cout << "Total Sales Tax: $" << totalTax << endl;
    
    return 0;
}