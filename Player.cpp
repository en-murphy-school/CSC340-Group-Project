#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

// Include constructors, getters/setters for Player.h
// Use pointers for Items[]

Player::Player() {
    int money = 0;
    string name = "";
    //Item*[] itemList = nullptr;
    //Node* currentLocation = nullptr;
}

string Player::GetName() const {
    return this->name;
}

Player::Player(int newMoney, string newName, Item[]* newItemList, Node* newCurrentLocation) {
    money = newMoney;
    name = newName;
    //itemList* = newItemList;
    //currentLocation = newCurrentLocation;
}


void Player::SetName(string newName) {
    this->name = newName;
}

int Player::GetMoney() {
    return money;
}

void Player::SetMoney(int newMoney) {
    money = newMoney;
}
/*
Item[] Player::GetItemList() {
    return itemList;
}

void SetItemList(Item[]* newItemList) {
    itemList = newItemList;
}

Node* GetCurrentLocation() {
    return currentLocation;
}

void SetCurrentLocation(Node* newCurrentLocation) {
    currentLocation = newCurrentLocation;
}
*/

