//
//  bankcard.cpp
//  hw5.5
//
//  Created by Angelina Kim on 5/28/20.
//  Copyright © 2020 Angelina Kim. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "card.h"
#include "bankcard.h"
using namespace std;

BankCard::BankCard():Card(){
    accountnum = "";
    CSC = "";
}

BankCard::BankCard(const string& pname, const string& iname, const string& exp, const string& account, const string seccode):Card(pname, iname, exp){
    accountnum = account;
    CSC = seccode;
}

void BankCard::printcard(){
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"| "<<endl;
    cout<<"|"<< " "<< inst_name<<endl;
    cout<<"|"<<setw(10)<<right<<"name : "<<name<<endl;
    cout<<"|"<<setw(10)<<right<<"exp : "<<exp_date.substr(0,2)<<"/"<<exp_date.substr(2, 2)<<"/"<<exp_date.substr(4,4)<<endl;
    cout<<"|"<<endl;
    cout<<"|"<<endl;
    cout<<"|"<<setw(10)<<right<<"Account# : "<<accountnum<<endl;
    cout<<"|"<<setw(10)<<right<<"CSC : "<<CSC<<endl;
    cout<<"|"<<endl;
}

