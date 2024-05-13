/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menu.cpp
 * Author: 2926051
 * 
 * Created on May 13, 2024, 11:56 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "Menu.h"
#include "user_info.h"

using namespace std;

Menu::Menu() {
}

Menu::Menu(const Menu& orig) {
}

Menu::~Menu() {
}

void Menu::Login(){
    string username;
    string password;
    string email;
    
    cout << "Username" << endl;
    cin >> username;
    user_info.SetUsername(username);
    cout <<"Email"<<endl;
    cin >> email;
    user_info.SetEmail(email);
    cout<<"Password"<<endl;
    cin >> password;
    user_info.SetPassword(password);
    
}

void Menu::Register(){
    
}

