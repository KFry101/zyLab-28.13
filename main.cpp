#include <iostream>
#include "ItemToPurchase.h"
using namespace std;


int main() {
   
   /* Type your code here */
   //(2) In main(), prompt the user for two items and create two objects of the ItemToPurchase class.
   //Before prompting for the second item, call cin.ignore() to allow the user to input a new string. 

   string itemName1;
   string itemName2;

   int itemPrice1;
   int itemPrice2;

   int itemQuantity1;
   int itemQuantity2;
   
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName1);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice1;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity1;
   cin.ignore();
   
   cout << endl;
   cout << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName2);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice2;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity2;

   ItemToPurchase item1;
   ItemToPurchase item2;

   item1.SetName(itemName1);
   item1.SetPrice(itemPrice1);
   item1.SetQuantity(itemQuantity1);
   item2.SetName(itemName2);
   item2.SetPrice(itemPrice2);
   item2.SetQuantity(itemQuantity2);
   
   //(3) Add the costs of the two items together and output the total cost.
   int price1 = (item1.GetQuantity() * item1.GetPrice());
   int price2 = (item2.GetQuantity() * item2.GetPrice());
   int totalPrice = (price1 + price2);

   cout << endl;
   cout << "TOTAL COST" << endl;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << (item1.GetQuantity() * item1.GetPrice()) << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << (item2.GetQuantity() * item2.GetPrice()) << endl;

   cout << endl;
   cout << "Total: $" << totalPrice << endl;
   
   return 0;
}
