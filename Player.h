#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "items/Item.h"
#include "items/Armor.h"
#include "items/Weapon.h"

class Player {
private:
    int money;
    string name;
    vector<Item*> playerItems;

public:
    Player();
    Player(const string& name, const int& money, vector<Item*>& playerItems);
    string getPlayerName() const;
    void setPlayerName(const string& name);
    int getMoney() const;
    void setMoney(const int& money);
    vector<Item*> getPlayerItems() const;
    void addPlayerItem(Item* item);
    void removePlayerItem(Item* item);
    bool findItem(const string& itemName) const;
    void printPlayerItems();

};

#endif