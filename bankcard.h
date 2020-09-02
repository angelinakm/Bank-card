//
//  bankcard.h
//  hw5.5
//
//  Created by Angelina Kim on 5/28/20.
//  Copyright © 2020 Angelina Kim. All rights reserved.
//

#ifndef bankcard_h
#define bankcard_h
#include <iostream>
#include <string>
#include "card.h"
using namespace std;

class BankCard: public Card{
public:
    BankCard();
    BankCard(const string& pname, const string& iname, const string& exp, const string& account, const string seccode);
    virtual void printcard();
    
private:
    string accountnum;
    string CSC;
};


#endif /* bankcard_h */
