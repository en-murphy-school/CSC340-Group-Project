// LinkedList for our locations

#include "LinkedList.h"
using namespace std;

//Constructors
LinkedList::LinkedList(){
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}
LinkedList::LinkedList(GameData *gameData) {
    Node *node = new Node(gameData);
    this->head = node;
    this->tail = node;
    this->size = 1;
}
//End constructors

//setters & getters
void LinkedList::setSize(int newSize) {
    this->size = newSize;
}

void LinkedList::setHead(Node *newHead) {
    this->head = newHead;
}

Node *LinkedList::getHead() const {
    return this->head;
}

void LinkedList::setTail(Node *newTail) {
    this->tail = newTail;
}

Node *LinkedList::getTail() const {
    return this->tail;
}
int LinkedList::Size() const {
    return this->size;
}

//End setters and getters

//LinkedList methods
void LinkedList::pushBack(GameData *gameData) {
    Node *newNode = new Node(gameData);
    if (this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
        this->size++;
        return;
    }else {
        //disconnect tail and add new node
        Node *temp;
        temp = this->tail;
        this->tail = newNode;
        newNode = temp;
        newNode->setNext(this->tail);
        this->tail->setNext(nullptr);
        this->size++;
    }
}
//Takes location GameData of the CURRENT node in the LL and moves player to the next Node
void LinkedList::goNextLocation(Node *current) {
    Node* next = current->getNext();
    GameData* data1, *data2;
    data1 = current->getData();
    data2 = next->getData();
    next->setData(data1->movePlayerToNextLocation(data2));
}



