/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Thief.h
 * Author: JapanPanda
 *
 * Created on May 19, 2016, 8:33 PM
 */

#ifndef THIEF_H
#define THIEF_H
#include <string>
using namespace std;
class Thief {
public:
    Thief(string gameName);
    void setName(string gameName); 
private:
    string name;
};


#endif /* THIEF_H */

