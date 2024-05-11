#include "Player.h"

Player::Player() {
    this->money = 0;
    this->name = "Default Name";
}

Player::Player(const string& name, const int& money, vector<Item*>& playerItems) {
    this->name = name;
    this->money = money;
    this->playerItems = playerItems;
}

string Player::getPlayerName() const {
    return this->name;
}

void Player::setPlayerName(const string& name) {
    this->name = name;
}

int Player::getMoney() const {
    return this->money;
}

void Player::setMoney(const int& money) {
    this->money = money;
}

vector<Item*> Player::getPlayerItems() const{
    if (this->playerItems.size() == 0) {
        cout << "There are no items in this store!" << endl;
    }

    return this->playerItems;
}

void Player::addPlayerItem(Item* item) {
    this->playerItems.push_back(item);
}

void Player::removePlayerItem(Item* item){
    for (vector<Item*>::iterator it = playerItems.begin(); it!= playerItems.end(); it++) {
        if ((*it)->getItemName() == item->getItemName()) {
            delete *it;
            playerItems.erase(it);
            return;
        }
    }
}

bool Player::findItem(const string& itemName) const {
    for (vector<Item*>::const_iterator it = (*this).playerItems.begin(); it != (*this).playerItems.end(); it++) {
        if ((*it)->getItemName() == itemName) {
            return true;
        }
    }
    return false;
}

void Player::printPlayerItems() {
    for (int i = 0; i < playerItems.size(); i++) {
        playerItems.at(i)->printItem();
        cout << endl;
    }
}