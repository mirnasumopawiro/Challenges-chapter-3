//
//  8.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each. Write a program that calculates how many widgets are stacked on a pallet, based on the total weight of the pallet. The program should ask the user how much the pallet weighs by itself and with the widgets stacked on it. It should then calculate and display the number of widgets stacked on the pallet.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const float WIDGET_WEIGHT = 12.5;
    float palletWeight;
    float palletWeightWidget;
    int numWidget;
    
    cout << "How much does the pallet weigh by itself? ";
    cin >> palletWeight;
    
    cout << "How much does the pallet weigh with the widgets stacked? ";
    cin >> palletWeightWidget;
    
    numWidget = (palletWeightWidget - palletWeight) / WIDGET_WEIGHT;
    
    cout << "There are " << numWidget << " widgets on the pallet.";
    
    return 0;
}