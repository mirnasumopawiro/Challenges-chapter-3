//
//  24.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//
//  There once was a person named NAME who lived in CITY. At the age of AGE, NAME went to college at COLLEGE. NAME graduated and went to work as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They both lived happily ever after!


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string name;
    string city;
    int age;
    string college;
    string profession;
    string animal;
    string petname;
    
    cout << "Please enter a name: ";
    cin >> name;
    cout << "Please enter a city: ";
    cin >> city;
    cout << "Please enter a number: ";
    cin >> age;
    cout << "Please enter a college: ";
    cin >> college;
    cout << "Please enter a profession: ";
    cin >> profession;
    cout << "Please enter an animal: ";
    cin >> animal;
    cout << "Please enter another name: ";
    cin >> petname;
    
    cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << petname << ". They both lived happily ever after!" << endl;
    
    return 0;
}