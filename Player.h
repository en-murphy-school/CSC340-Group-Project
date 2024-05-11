#ifndef PLAYER_H
#define PLAYER_H
#include "Items/Item.h"
#include <string>


class Player {
private:
    int money;
    string name;
    Item* itemList [100];
    //Node* currentLocation;

public:
// Constructors and getters/setters
    Player();
    Player(int newMoney, std::string newName, Item[]* newItemList, Node* newCurrentLocation);

    string GetName() const;
    int GetMoney();
   // Item[] GetItemList();
   // Node* GetCurrentLocation();

    void SetName(string newName);
    void SetMoney(int newMoney);
    //void SetItemList(Item[]* newItemList);
    //void SetCurrentLocation(Node* newCurrentLocation);
};

#endif