#ifndef PLAYER_H
#define PLAYER_H
#include "Items.h"
#include <string>


class Player {
private:
    int money;
    std::string name;
    Item[]* itemList;
    Node* currentLocation;

public:
// Constructors and getters/setters
    Player();
    Player(int newMoney, std::string newName, Item[]* newItemList, Node* newCurrentLocation);

    std::string GetName();
    int GetMoney();
    Item[] GetItemList();
    Node* GetCurrentLocation();

    void SetName(std::string newName);
    void SetMoney(int newMoney);
    void SetItemList(Item[]* newItemList);
    void SetCurrentLocation(Node* newCurrentLocation);
};

#endif