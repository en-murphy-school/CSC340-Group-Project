#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

// Include constructors, getters/setters for Player.h
// Use pointers for Items[]

Player::Player() {
    int money = 0;
    string name = "";
    Items[]* itemList = nullptr;
    Node* currentLocation = nullptr;
}

Player::Player(int newMoney, string newName, Item[]* newItemList, Node* newCurrentLocation) {
    money = newMoney;
    name = newName;
    itemList* = newItemList;
    currentLocation = newCurrentLocation;
}

string GetName() {
    return name;
}

void SetName(string newName) {
    name = newName;
}

int GetMoney() {
    return money;
}

void SetMoney(int newMoney) {
    money = newMoney;
}

Item[] GetItemList() {
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


