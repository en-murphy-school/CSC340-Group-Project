#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "items/Weapon.h"
#include "items/Armor.h"

using namespace std;

Item* items[100];
int itemCount = 0;

string formatName(const string& inputName) {
    string formattedName;
    for (char c : inputName) 
    {
        if (isupper(c)) 
        {
            formattedName += ' '; 
        }
        formattedName += c;
    }
    return formattedName;
}

string formatDescription(const string& inputDescription) {
    string formattedDescription;
    for (char c : inputDescription) {
        if (c == '-') {
            formattedDescription += ' '; // Replace dash with space
        } else {
            formattedDescription += c;
        }
    }
    return formattedDescription;
}


void generateItems() {
    ifstream inputFile("items.txt"); 

    if (!inputFile) {
        cerr << "Failed to open file." << endl;
        return; 
    }


    string type;
    string name;
    string description;
    int cost;
    bool available;
    int value1, value2;

    while (inputFile >> type >> name >> description >> cost >> available >> value1 >> value2) {
        if (type == "WEAPON") {
            name = formatName(name);
            description = formatDescription(description);
            Weapon* newWeapon = new Weapon(name, description, cost, available, value1, value2);
            cout << "Weapon Made" << endl;
            items[itemCount] = newWeapon;
            itemCount++;

        } else if (type == "ARMOR") {
            name = formatName(name);
            description = formatDescription(description);
            Armor* newArmor = new Armor(name, description, cost, available, value1, value2);
            cout << "Armor Made" << endl;
            items[itemCount] = newArmor;
            itemCount++;

        }
        
    }

    inputFile.close(); 
}



int main() {

    generateItems();

    


    return 0;
}