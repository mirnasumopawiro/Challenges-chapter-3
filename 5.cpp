//
//  male and female percentages.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Write a program that asks the user for the number of males and the number of females registered in a class. The program should display the percentage of males and females in the class.
//  Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 60%.

#include <iostream>
using namespace std;

int main() {
    float numberMale;
    float numberFemale;
    float totalClass;
    float percentageMale;
    float percentageFemale;
    
    cout << "Enter the number of males: ";
    cin >> numberMale;
    cout << "Enter the number of females: ";
    cin >> numberFemale;
    
    totalClass = numberMale + numberFemale;
    
    percentageMale = (numberMale / totalClass) * 100;
    
    percentageFemale = (numberFemale / totalClass) * 100;
    
    cout << "The class consists of " << percentageMale << "% male and " << percentageFemale << "% female.\n";
    
    
    
    return 0;
}