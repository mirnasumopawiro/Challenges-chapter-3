//
//  6.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  A cookie recipe calls for the following ingredients:
//  • 1.5 cups of sugar
//  • 1 cup of butter
//  • 2.75 cups of flour
//  The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks the user how many cookies he or she wants to make, and then displays the number of cups of each ingredient needed for the specified number of cookies.


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float sugar = 1.5;
    float butter = 1;
    float flour = 2.75;
    float nSugar;
    float nButter;
    float nFlour;
    int cookie;
    float totalSugar;
    float totalButter;
    float totalFlour;
    
    nSugar = sugar / 48;
    nButter = butter / 48;
    nFlour = flour / 48;
    
    
    cout << "How many cookies do you want to make?\n";
    cin >> cookie;
    
    totalSugar = cookie * nSugar;
    totalButter = cookie * nButter;
    totalFlour = cookie * nFlour;
    
    cout << setprecision (2) << fixed;
    cout << "You will need: \n";
    cout << totalSugar << " cups of sugar\n";
    cout << totalButter << " cups of butter\n";
    cout << totalFlour << " cups of flour\n";
    
    return 0;
}