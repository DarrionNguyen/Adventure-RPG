/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Wizard.h"
#include <iostream>
#include <string>
using namespace std;
extern string name;
extern bool playerHasChosenClass;
extern string playerName;

Wizard::Wizard(string gameName) {
    if(playerHasChosenClass == false)
    {
        cout << playerName << " has become a Wizard!" << endl;
        playerHasChosenClass = true;
    }
    else if(playerHasChosenClass == true){
    name = gameName;
    cout << name << ", the Wizard, has joined your party!" << endl;
    }
}

void Wizard::setName(string gameName) {
    name = gameName;
}
