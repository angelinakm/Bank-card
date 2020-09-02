//
//  card.h
//  hw5.5
//
//  Created by Angelina Kim on 5/28/20.
//  Copyright © 2020 Angelina Kim. All rights reserved.
//

#ifndef card_h
#define card_h
#include <iostream>
#include <string>
using namespace std;

class Card{
public:
    Card();
    Card(const string& pname, const string& iname, const string& exp);
   virtual string get_name() const;
    virtual string get_instname() const;
    int get_expdate() const;
    virtual void printcard();
    
protected:
     string inst_name;
     string name;
    string exp_date;
    
    
};

#endif /* card_h */
