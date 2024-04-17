#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase(){
  this->itemName="none";
  this->itemPrice=0;
  this->itemQuantity=0;
} 

ItemToPurchase::ItemToPurchase(string itemName, int itemPrice, int itemQuantity){
  this->itemName=itemName;
  this->itemPrice=itemPrice;
  this->itemQuantity=itemQuantity;
}


