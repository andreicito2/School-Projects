/**
 * Expert: Implement a menu that utilizes the method functions in ShoppingList
 * class.
 */
#include "menu.h"
#include "shopping_list.h"
#include <iostream>
using namespace std;
// TODO Add your code here

void menu() {
  int option;
  ShoppingList list;
  string item;
  do {
    cout << "========== MENU ==========" << endl;
    cout << "1) View All Items" << endl;
    cout << "2) Add An Item" << endl;
    cout << "3) Remove An Item" << endl;
    cout << "Option: ";
    cin >> option;
    // cout << endl;
    switch (option) {
    case 1:
      // cout << endl;
      for (unsigned int i = 0; i < list.getList().size(); i++) {
        cout << i << ". " << list.getList().at(i) << endl;
      }
      cout << endl;
      break;
    case 2:
      cout << "Enter the name of the item: ";
      cin >> item;
      cout << endl;
      list.addItem(item);
      break;
    case 3:
      cout << "Enter the name of the item: ";
      cin >> item;
      cout << endl;
      list.removeItem(item);
      break;
    case -1:
      break;
    default:
      cout << "INVALID OPTION" << endl;
      cout << endl;
      break;
    }

  } while (option != -1);
  cout << endl << "Exiting Shopping List" << endl;
}
