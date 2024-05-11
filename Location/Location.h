#ifndef LOCATION_H
#define LOCATION_H

#include <string>
#include <vector>
#include "Item.h"
#include "Armor.h"
#include "Weapon.h"
class Location {
    private:
        string name;
        string description;
        vector<Item*> storeItems;
        Item* hiddenItem;
    public:
        Location();
        Location(const string& name, const string& description, vector<Item*>& storeItems);
        Location(const string& name, const string& description, vector<Item*>& storeItems, Item* hiddenItem);
        string getLocationName() const;
        void setLocationName(const string& name);
        string getLocationDescription() const;
        void setLocationDescription(const string& description);
        vector<Item*> getStoreItems() const;
        void addStoreItem(Item* item);
        bool findItem(const string& itemName) const;
        Item* getHiddentItem() const;
        void setHiddenItem(Item* item);
        void printStoreItems();
};


#endif 
