//
//  idcard.h
//  hw5.5
//
//  Created by Angelina Kim on 5/28/20.
//  Copyright © 2020 Angelina Kim. All rights reserved.
//

#ifndef idcard_h
#define idcard_h
#include <iostream>
#include <string>
#include "card.h"
using namespace std;

class IDCard:public Card{
public:
    IDCard();
    IDCard(const string& pname, const string& iname, const string& exp, const string& IDnum, const string Date);
    virtual void printcard();
private:
    string dob;
    string ID_num;
    
    
};

#endif /* idcard_h */
