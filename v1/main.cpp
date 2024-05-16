/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 2926051
 *
 * Created on May 13, 2024, 11:44 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "Menu.h"
#include "user_info.h"

using namespace std;

const int size = 100;

/*
 * 
 */
int main(int argc, char** argv) {
    
    user_info database[size];
    int count = 0;
    
    //cout << "Username" << endl;
    //cin >> database.username[count];
    //cout <<"Email"<<endl;
    //cin >> database.email[count];
    //cout<<"Password"<<endl;
    //cin >> database.password[count];
    
    Menu.Login();
    cout << database[count] <<endl;
    cout << database[count] <<endl;
    cout << database[count] <<endl;
    
    count++;
    
    return 0;
}

