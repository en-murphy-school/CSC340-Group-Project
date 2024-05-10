// location node

#ifndef NODE_H
#define NODE_H

#include <string>
#include "GameData.h"

class Node {
    private:
    GameData *gameData;
    Node *next;
public:
    Node();
    Node(GameData *gameData);
    Node* getNext() const;
    void setNext(Node *setNext);
    GameData* getData() const;
    void setData(GameData *gameData);
    void movePlayer(Player player);
    void goNextLocation();

};

#endif