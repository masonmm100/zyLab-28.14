#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
private:
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;

public:
    ItemToPurchase();
    ItemToPurchase(const string& name, const string& description, int price = 0, int quantity = 0);

    void SetName(const string& name);
    void SetDescription(const string& description);
    void SetPrice(int price);
    void SetQuantity(int quantity);

    string GetName() const;
    string GetDescription() const;
    int GetPrice() const;
    int GetQuantity() const;
    
    void PrintItemCost() const;
    void PrintItemDescription() const;
};

#endif
