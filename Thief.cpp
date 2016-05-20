/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Thief.h"
#include <iostream>
#include <string>
using namespace std;
extern string name;
extern bool playerHasChosenClass;
extern string playerName;

Thief::Thief(string gameName) {
    if(playerHasChosenClass == false)
    {
        cout << playerName << " has become a Thief!" << endl;
        playerHasChosenClass = true;
    }
    else if(playerHasChosenClass == true){
    name = gameName;
    cout << name << ", the Thief, has joined your party!" << endl;
    }
}

void Thief::setName(string gameName) {
    name = gameName;
}
