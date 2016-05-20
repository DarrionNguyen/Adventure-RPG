/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Warrior.h
 * Author: JapanPanda
 *
 * Created on May 19, 2016, 8:37 PM
 */

#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
using namespace std;
class Warrior {
public:
    Warrior(string gameName);
    void setName(string gameName);
   
private:
    string name;
};


#endif /* WARRIOR_H */

