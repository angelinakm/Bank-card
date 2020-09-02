//
//  idcard.cpp
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
#include "idcard.h"
using namespace std;

IDCard:: IDCard():Card(){
    dob = "";
    ID_num = "";
}

IDCard::IDCard(const string& pname, const string& iname, const string& exp, const string& IDnum, const string Date):Card(pname, iname, exp){
    ID_num = IDnum;
    dob = Date;
}
void IDCard::printcard(){
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"| "<<endl;
    cout<<"|"<< " "<< inst_name<<endl;
    cout<<"|"<<setw(10)<<right<<"name : "<<name<<endl;
    cout<<"|"<<setw(10)<<right<<"exp : "<<exp_date.substr(0,2)<<"/"<<exp_date.substr(2, 2)<<"/"<<exp_date.substr(4,4)<<endl;
    cout<<"|"<<endl;
    cout<<"|"<<endl;
    cout<<"|"<<setw(10)<<right<<"ID# : "<<ID_num<<endl;
    cout<<"|"<<setw(10)<<right<<"DOB : "<<dob<<endl;
    cout<<"|"<<endl;
}
