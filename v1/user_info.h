/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   user_info.h
 * Author: 2926051
 *
 * Created on May 13, 2024, 12:02 PM
 */

#ifndef USER_INFO_H
#define USER_INFO_H
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class user_info {
public:
    user_info();
    user_info(const user_info& orig);
    virtual ~user_info();
    void SetEmail(string email);
    string GetEmail() const;
    void SetPassword(string password);
    string GetPassword() const;
    void SetUsername(string username);
    string GetUsername() const;
    string username;
    string password;
    string email;
private:

};

#endif /* USER_INFO_H */

