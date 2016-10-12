//
//  test average.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Write a program that asks for five test scores. The program should calculate the average test score and display it. The number displayed should be formatted in fixed-point notation, with one decimal point of precision.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float score1;
    float score2;
    float score3;
    float score4;
    float score5;
    float average;
    
    cout << "Enter five test scores and I will calculate the average\n";
    cin >> score1;
    cin >> score2;
    cin >> score3;
    cin >> score4;
    cin >> score5;
    
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    
    cout << setprecision(1) << fixed;
    cout << "The average test score is " << average << endl;
    
    return 0;
}