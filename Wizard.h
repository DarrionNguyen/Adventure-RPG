#ifndef WIZARD_H
#define WIZARD_H
#include <iostream>
#include <string>

using namespace std;
class Wizard {
public:
    Wizard(string gameName);
    void setName(string gameName); 
private:
    string name;
};


#endif