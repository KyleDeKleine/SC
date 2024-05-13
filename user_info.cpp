/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   user_info.cpp
 * Author: 2926051
 * 
 * Created on May 13, 2024, 12:02 PM
 */

#include "user_info.h"

user_info::user_info() {
}

user_info::user_info(const user_info& orig) {
}

user_info::~user_info() {
}

void user_info::SetEmail(string email) {
    this->email = email;
}

string user_info::GetEmail() const {
    return email;
}

void user_info::SetPassword(string password) {
    this->password = password;
}

string user_info::GetPassword() const {
    return password;
}

void user_info::SetUsername(string username) {
    this->username = username;
}

string user_info::GetUsername() const {
    return username;
}

