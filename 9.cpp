//
//  9.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//
//  A bag of cookies holds 30 cookies. The calorie information on the bag claims that there are 10 “servings” in the bag and that a serving equals 300 calories. Write a program that asks the user to input how many cookies he or she actually ate and then reports how many total calories were consumed.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int numEaten;
    int totalCookies = 30;
    int servings = 10;
    int cookiePerServing;
    const int CALORIE_PER_SERVING = 300;
    int caloriesConsumed;
    int caloriePerCookie;
    
    cookiePerServing = totalCookies / servings;
    caloriePerCookie = CALORIE_PER_SERVING / cookiePerServing;
    
    cout << "How many cookies did you eat?\n";
    cin >> numEaten;
    
    caloriesConsumed = numEaten * caloriePerCookie;
    
    cout << "Total calories consumed were " << caloriesConsumed << " calories.\n";
    
    
    return 0;
}