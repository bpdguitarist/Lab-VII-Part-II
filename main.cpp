//
//  main.cpp
//  Lab VII Part II
//
//  Created by Edgar Esparza on 6/29/15.
//  Copyright (c) 2015 Edgar Esparza. All rights reserved.
//

#include <iostream>

using namespace std;

bool compute(int one, int two, int & sum, int & product, int & quotient);

int main()
{
    int one=20, two=10;
    int sum = 0, product = 0, quotient = 0;
    compute(one, two, sum, product, quotient);
    cout<<"The first number= "<<one<<endl;
    cout<<"The second number= "<<two<<endl;
    cout<<"The sum is= "<<sum<<endl;
    cout<<"The product is= "<<product<<endl;
    if(two!=0)
        cout<<"The quotient is="<<quotient<<endl;
    else
        cout<<"The quotient cannot be calculated"<<endl;
}

bool compute(int one, int two, int & sum, int & product, int & quotient){
    sum=one+two;
    product=one*two;
    if(two!=0){
        quotient=one/two;
        return true;
    }else
            return false;
        
    
}