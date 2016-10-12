//
//  17.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//
//  Write a program that can be used as a math tutor for a young student.
//  The program should then pause while the student works on the problem. When the student is ready to check the answer, he or she can press a key and the program will display the correct solution:

#include <iostream>
#include <string>
#include <cstdlib>//for random
#include <ctime>//for time
#include <iomanip>

using namespace std;

int main()
{
    unsigned seed = time(0);
    srand (seed);
    
    int num1,
    num2,
    total,
    maxNum = 999,
    minNum = 100;
    
    num1 = (rand() % (maxNum - minNum + 1)) + minNum;
    num2 = (rand() % (maxNum - minNum + 1)) + minNum;
    
    cout << setw(5) << num1 << endl;
    cout << setw(5) << num2 << endl;
    cout << "+_____" << endl;
    cin >> total;
    
    if (total == num1+num2)
    {
        cout << "true" << endl;
    }else
    {
        cout << "wrong answer, the answer is " << num1+num2 << endl;
    }
    
    return 0;
}