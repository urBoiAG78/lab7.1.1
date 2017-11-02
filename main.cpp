/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on October 31, 2017, 12:55 PM
 */

#include <iostream> 
using namespace std; 
int main(void) {
int a = 8, b = 0, c = 0; 
cin >> b;
try {    
        if(b >0){
            c = a / b;        
    }
        else{
            throw string("Houston, we have a problem");
        }
}
catch(string &issue)
{
    cout << "Your Input is not valid, you can't divide by zero" << endl;
}
cout << c << endl;
return 0; }

