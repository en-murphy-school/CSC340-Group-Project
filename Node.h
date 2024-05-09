// location node

#ifndef NODE_H
#define NODE_H

#include <string>

struct Node {
    private:
        std::string LocationName;
        string description;
        Node* next;
        Node* prev;
        Item[] storeItems;
        Item exploreItem;

    public:

        Node();
    //Something similar to this, we dont need multiple because we are making PERFECT files to read from
        Node(const std:string& LocationName, const std:string& description, Item[] storeItems, Item exploreItem);
     
        Node* getNext() const;
        Node* getPrev() const;

// Add simple getters and setters for this file


};

#endif