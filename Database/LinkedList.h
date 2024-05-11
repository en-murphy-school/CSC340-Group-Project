// LinkedList for our locations

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Database/Node.h"

class LinkedList {

    private:
    Node *head;
    Node *tail;
    int size;
    void setSize(int size);
public:
    LinkedList();
    LinkedList(GameData *gameData);
    void setHead(Node *head);
    Node* getHead() const;
    void setTail(Node *tail);
    Node *getTail() const;
    void pushBack(GameData *gameData);
    int Size() const;
    void goNextLocation(Node *next);

};

#endif