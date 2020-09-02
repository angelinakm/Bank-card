//
//  card.cpp
//  hw5.5
//
//  Created by Angelina Kim on 5/28/20.
//  Copyright © 2020 Angelina Kim. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include "card.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

Card::Card(){
    name = "";
    inst_name = "";
    exp_date = "";
}

Card::Card(const string& pname, const string& iname, const string& exp){
    name = pname;
    inst_name = iname;
    exp_date = exp;
}


 string Card::get_name() const{
    return name;
}

  int Card::get_expdate() const{
      int year =stoi (exp_date.substr(4,3));
      int month_day = stoi (exp_date.substr(0,4));
      return year*1000 +month_day;
      
}

  string Card::get_instname() const {
    return inst_name;
}

void Card:: printcard(){
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"| "<<endl;
    cout<<"|"<< " "<<  inst_name<<endl;
    cout<<"|"<<setw(10)<<right<<"name : "<<name<<endl;
    cout<<"|"<<setw(10)<<right<<"exp : "<<exp_date.substr(0,2)<<"/"<<exp_date.substr(2, 2)<<"/"<<exp_date.substr(4,3)<<endl;
          cout<<"|"<<endl;
    
}
