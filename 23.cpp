//
//  23.cpp
//  Chapter 3 Programming Challenges
//
//  Created by Mirna Sumopawiro on 10/12/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int shareBought = 1000;
    float stockBuy = 45.40;
    float totalBought = shareBought * stockBuy;
    float commissionFirst = totalBought * 2 / 100;
    int shareSold = 1000;
    float stockSell = 56.90;
    float totalSold = shareSold * stockSell;
    float commissionSecond = totalSold * 2 / 100;
    float profit = (totalSold - commissionFirst) - commissionSecond;
    
    cout << "Joe paid $" << totalBought << " for the stock.\n";
    cout << "Joe paid $" << commissionFirst << " to his broker when he bought the stock.\n";
    cout << "Joe sold $" << totalSold << " for the stock.\n";
    cout << "Joe paid $" << commissionSecond << " to his broker when he sold the stock.\n";
    cout << "Joe earned $" << profit << " profit from selling the stock.\n";
    
    
    
    
    return 0;
}