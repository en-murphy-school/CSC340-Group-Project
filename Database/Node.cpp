#include "Node.h"
using namespace std;

Node::Node(){
    this->gameData = nullptr;
    this->next = nullptr;
}
Node::Node(GameData *gameData){
    this->gameData = gameData;
    this->next = nullptr;
}
Node *Node::getNext() const {
    return this->next;
}

void Node::setNext(Node *node) {
    this->next = node;
}

GameData* Node::getData() const {
    return this->gameData;
}

void Node::setData(GameData *gameData) {
    this->gameData = gameData;
}

void Node::movePlayer(Player player) {

}

void Node::goNextLocation() {

}
