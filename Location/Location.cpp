#include "Location.h"

Location::Location() {
    (*this).name = "Defaul Name";
    (*this).description = "Default Description";
}

Location::Location(const string& name, const string& description, vector<Item*>& storeItems) {
    (*this).name = name;
    (*this).description = description;
    (*this).storeItems = storeItems;
}

Location::Location(const string& name, const string& description, vector<Item*>& storeItems, 
                    Item* hiddenItem) {
    (*this).name = name;
    (*this).description = description;
    (*this).storeItems = storeItems;
    (*this).hiddenItem = hiddenItem;
}

string Location::getLocationName() const {
    return (*this).name;
}

void Location::setLocationName(const string& name) {
    (*this).name = name;
}

string Location::getLocationDescription() const {
    return (*this).description;
}

void Location::setLocationDescription(const string& description) {
    (*this).description = description;
}

vector<Item*> Location::getStoreItems() const {
    if ((*this).storeItems.size() == 0) {
        cout << "There are no items in this store!" << endl;
    }

    return (*this).storeItems;
}

void Location::addStoreItem(Item* item) {
    (*this).storeItems.push_back(item);
}

bool Location::findItem(const string& itemName) const {
    for (vector<Item*>::const_iterator it = (*this).storeItems.begin(); it != (*this).storeItems.end(); it++) {
        if ((*it)->getItemName() == itemName) {
            return true; 
        }
    }
    return false;
}

Item* Location::getHiddentItem() const {
    return (*this).hiddenItem;
}

void Location::setHiddenItem(Item* item) {
    (*this).hiddenItem = item;
}

void Location::printStoreItems() {
    for (int i = 0; i < storeItems.size(); i++) {
        storeItems.at(i)->printItem();
        cout << endl;
    }
}



