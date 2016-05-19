#include <cstdlib>
#include <iostream>
#include <string>
#include "Wizard.h"
using namespace std;

/*
 Listing the game-related variables
 */
bool gameOver = false; 
char confirmAction;

/*
 Listing the player-related variables
 */
string playerName; 
string playerGender;
string playerClassChoice;
int playerLevel = 1;
int playerAge;

/*
 Listing the game functions
 */
void playerInfo();
void classSelection();
void game1();

/*
 Actual code starts here
 */
int main() {
    cout << "Adventure v0.1 loaded" << endl;
    cout << "Created by Vincent and Andrew" << endl;
    cout << "Play? Y/N" << endl;
    cin >> confirmAction;
    if(confirmAction = 'Y')
    {
        playerInfo();
    }
    else if (confirmAction = 'N')
    {
        cout << "Scared?" << endl;
                return 0;
    }
    return 0;
}

void playerInfo() {
    cout << "Welcome! Please enter in your corresponding information." << endl;
    cout << "Name: ";
    cin >> playerName;
    cout << "Age: ";
    cin >> playerAge;
    cout << "Gender: ";
    cin >> playerGender;
    cout << "Please confirm the following information:" << endl;
    cout << "Name: " << playerName << endl;
    cout << "Age: " << playerAge << endl;
    cout << "Gender: " << playerGender << endl;
    cout << "Confirm? Y/N" << endl;
    cin >> confirmAction;
    if(confirmAction == 'Y') {
        classSelection();
    }
    if(confirmAction == 'N') {
        playerInfo();
    }
}

void classSelection() {
    cout << "Once upon a time, in the faraway land of -insert Generic name here-, an average farmer named " << playerName << "was born." << endl;
    cout << "There was absolutely nothing special about him at first, but one day his life changed." << endl;
    cout << "You walk into a marketplace crowded with smelly people from all over the world. One store sticks out to you." << endl;
    cout << "The store looks dinky and quite ghetto and 'depressing' as Holden Caulfield would put it... You decide to enter since you're dumb." << endl;
    cout << "You enter the store..." << endl;
    cout << "You encounter an old hag named -insert generic foreign name here- and she asks you the question:" << endl;
    cout << "What do you want to be when you grow up, and she presents you with three cards labelled:" << endl;
    cout << "Warrior | Wizard | Thief" << endl;
    cout << "You answer: ";
    cin >> playerClassChoice;
    if(playerClassChoice == "Warrior" || playerClassChoice == "warrior") {
        cout << "fgt" << endl;
    }
    if (playerClassChoice == "Wizard" || playerClassChoice == "wizard") {
        cout << "fgt" << endl;
    }
    if (playerClassChoice == "Thief" || playerClassChoice == "thief") {
        cout << "fgt" << endl;
    }
}

