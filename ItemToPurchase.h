#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase() {
  private:

    string itemName; //Initialized in default constructor to "none"
    int itemPrice; //Initialized in default constructor to 0
    int itemQuantity; //Initialized in default constructor to 0
  public:
    ItemToPurchase();
    ItemToPurchase(string itemName, int itemPrice, int itemQuantity);
    void SetName(string name);
    string GetName();
    void SetPrice(int price);
    int GetPrice();
    void SetQuantity(int quantity);
    int GetQuantity();
}
#endif
