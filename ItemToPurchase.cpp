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

void ItemToPurchase::SetName(string name){
  itemName=name;
}
string ItemToPurchase::GetName(){
  return itemName;
}
void ItemToPurchase::SetPrice(int price){
  itemPrice=price;
}
int ItemToPurchase::GetPrice(){
  return itemPrice;
}
void ItemToPurchase::SetQuantity(int quantity){
  itemQuantity=quantity;
}
int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}


