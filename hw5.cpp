//
//  main.cpp
//  hw5.5
//
//  Created by Angelina Kim on 5/28/20.
//  Copyright © 2020 Angelina Kim. All rights reserved.
//

#include <iostream>
#include<fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "card.h"
#include "bankcard.h"
#include "idcard.h"
using namespace std;


bool fun (Card* a, Card* b){
    if (a->get_expdate() < b->get_expdate()){
        return true;
    }
    return false;
}


int main() {
    vector<Card*> v;
    int n =1;
    while (n!=0){
    cout<<"Print Wallet by selecting the type (0 when done) :"<<endl;
    cout<<"1. Basic Card"<<"\n"<<"2. ID Card \n"<<"3. Bank Card"<<endl;
    cin>>n;
    cin.get();
    if (n==1){
        cout<<"Card Type: "<< n;
        cout<<"Institution Name : ";
    string inst_name;
    getline(cin, inst_name);
        cout<<"Card Holder name : ";
    string name;
    getline(cin, name);
        string expdate;
        cout<<"Expiration Date(0 if none) : ";
    getline(cin, expdate);
    v.push_back(new Card(name, inst_name, expdate));
    }
        
    if (n==2){
    cout<<"Card Type: "<< n<<endl;
    cout<<"Institution Name : ";
    string inst_name;
    getline(cin, inst_name);
    cout<<"Card Holder name : ";
    string name;
    getline(cin, name);
    string expdate;
    cout<<"Expiration Date(0 if none) : ";
    getline(cin, expdate);
    string ID_num;
        cout<<"ID number : ";
    getline(cin, ID_num);
    string dob;
        cout<<"DOB mmddyy : ";
    getline(cin, dob);
    
    v.push_back(new IDCard(name, inst_name, expdate, ID_num, dob));
    }
    
    if (n==3){
    cout<<"Card Type: "<< n<<endl;
    cout<<"Institution Name : ";
    string inst_name;
    getline(cin, inst_name);
        cout<<"Card Holder name : ";
    string name;
    getline(cin, name);
        string expdate;
        cout<<"Expiration Date(0 if none) : ";
    getline(cin, expdate);
    string account;
        cout<<"Account number : ";
    getline(cin, account);
    string csc;
    cout<<"Card Security Code : "<<endl;
    getline(cin, csc);
    v.push_back(new BankCard(name, inst_name, expdate, account, csc));
    }
        
    sort(v.begin(), v.end(), fun);
    
    for (int i = 0; i<v.size(); i++){
        v[i]->printcard();
    }
//if n ==1,2,3; depedning on that cout which card type user inputs; then repeat until
            //n==0; use vector to push back each object; use pointer to create new
            //object
    
    //create vector<Card*>info; create a loop that takes in new values until user exits
    //then create a sort algorithm that sorts through the vector through expiration dates
    
    //print card in basic card and bank card, make it virtual; in basic card
    }
}

