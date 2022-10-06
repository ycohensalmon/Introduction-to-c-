/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 12 question 1
The project receives the number of items that are supposed
to be in the store and then allows the items to be received by
item code, item name, item price, minimum order and also allows addition to stock and purchase of items
*/
#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#pragma warning (disable:4996)
using namespace std;

struct Item // The structure defines all the existing details in the product
{
	int code;
	char name[21];
	int stock;
	int min;
	float price;
};

void condition(int& num);                                 // The function checks the input integrity

void addItem(Item*& store, int maxPlace, int& place);   // The function adds an item to the array

void findPrice(Item* store, int maxPlace, int place); // The function finds the price of the item by its code

void sold(Item* store, int maxPlace, int place);    // The function sells an item (takes it out of stock)

void order(Item* store, int maxPlace, int place); // The function orders all the items that are missing in stock

void print(Item* store, int maxPlace, int place);// The function prints all the items in stock

enum cases { EXIT = 0, ADD, FIND, SOLD, ORDER, PRINT };

int main()
{
	Item* store;
	int maxItems, numItems = 0;
	int choice;

	cout << "enter max number of items: " << endl;

	cin >> maxItems;
	condition(maxItems); // checks the input integrity

	store = new Item[maxItems];

	do {
		cout << "enter 0-5:\n";

		cin >> choice;

		switch (choice) {
		case EXIT:	break;                                  // When you press 0

		case ADD:	addItem(store, maxItems, numItems);    // When you press 1
			break;

		case FIND: 	findPrice(store, maxItems, numItems); // When you press 2
			break;

		case SOLD:	sold(store, maxItems, numItems);    // When you press 3
			break;

		case ORDER:	order(store, maxItems, numItems);  // When you press 4
			break;

		case PRINT: print(store, maxItems, numItems); // When you press 5
			break;

		default: 	cout << "ERROR" << endl;
		}
	} while (choice);

	delete[]store; // delete the struct

	return 0;
}
void condition(int& num)
{
	while (num < 0) // while the number is less than 0
	{
		cout << "ERROR\n";
		cin >> num;
	}
}
void addItem(Item*& store, int maxPlace, int& place)
{
	Item newitem;              // Creates a temporary struct (in case such a structure already exists or there is no space)
	cout << "enter code:\n";
	cin >> newitem.code;
	condition(newitem.code); // Input integrity check

	cout << "enter name:\n";
	char a = cin.get();
	cin.getline(newitem.name, 21); // Can only get 20 (+ '\0')

	cout << "enter amount:\n";
	cin >> newitem.stock;
	condition(newitem.stock); // Input integrity check

	cout << "enter minimum amount:\n";
	cin >> newitem.min;
	condition(newitem.min); // Input integrity check

	cout << "enter price:\n";
	cin >> newitem.price;
	while (newitem.price < 0) // Input integrity check
	{
		cout << "ERROR\n";
		cin >> newitem.price;
	}

	for (int i = maxPlace - place; i < maxPlace; i++) 
	{
		if (store[i].code == newitem.code && strcmp(store[i].name, newitem.name))
		{
		// If there is an item with the same code number but not with the same name

			cout << "ERROR\n"; 
			return;            // Exit function
		}
		if (store[i].code == newitem.code) // If the code number and also the item name are equal (The item name must be equal because if it is not equal then it should have left the function earlier)
		{
			store[i].stock += newitem.stock;
			store[i].min = newitem.min;
			store[i].price = newitem.price;
			return;
		}
	}
	if (place == maxPlace)       // If there is no space in stock
	{
		cout << "ERROR\n";
		return;
	}
	for (int i = maxPlace - place; i < maxPlace; i++) // Move all the items in one place backwards so that there is room for the new item in the last place
	{
		store[i - 1].code = store[i].code;
		strcpy(store[i - 1].name, store[i].name);
		store[i - 1].stock = store[i].stock;
		store[i - 1].min = store[i].min;
		store[i - 1].price = store[i].price;
	}
	store[maxPlace - 1].code = newitem.code;        // Put the last item in the last place in the array
	strcpy(store[maxPlace - 1].name, newitem.name);
	store[maxPlace - 1].stock = newitem.stock;
	store[maxPlace - 1].min = newitem.min;
	store[maxPlace - 1].price = newitem.price;
	place++;
}
void findPrice(Item* store, int maxPlace, int place)
{
	int code;
	cout << "enter code:\n";
	cin >> code;
	condition(code);  // Input integrity check

	for (int i = maxPlace - place; i < maxPlace; i++)
		if (store[i].code == code)                     // Checks if there is such a code in stock
		{
			cout << "price: " << store[i].price << endl; // Print the price
			return;
		}
	cout << "ERROR" << endl; // If it did not exit the function before ('return') then the meaning is that there is no such code and indeed prints an error message
}
void sold(Item* store, int maxPlace, int place)
{
	int code, num_to_buy;
	cout << "enter code:\n";
	cin >> code;
	condition(code);           // Input integrity check

	cout << "enter amount:\n";
	cin >> num_to_buy;
	condition(num_to_buy);   // Input integrity check

	for (int i = maxPlace - place; i < maxPlace; i++)
		if (store[i].code == code)                   // Checks if there is such a code in stock
		{
			store[i].stock -= num_to_buy;          // Reduces the quantity in stock
			return;
		}
	cout << "ERROR\n"; // If it did not exit the function before ('return') then the meaning is that there is no such code and indeed prints an error message
}
void order(Item* store, int maxPlace, int place)
{
	for (int i = maxPlace - place; i < maxPlace; i++)
	{
		if (store[i].stock < store[i].min) // If items are missing in stock
		{
			cout << "item name: " << store[i].name << endl;   
			cout << "code: " << store[i].code << endl;
			int to_order = store[i].min - store[i].stock + 5; // Makes an order of what is missing + 5 more items
			cout << "amount to order: " << to_order << endl;

			store[i].stock += to_order; // Orders the missing items
		}
	}
}
void print(Item* store, int maxPlace, int place)
{
	for (int i = maxPlace - place; i < maxPlace; i++) // Print all the items
	{
		cout << "name: " << store[i].name << endl;
		cout << "code: " << store[i].code << endl;
		cout << "amount: " << store[i].stock << endl;
		cout << "minimum amount: " << store[i].min << endl;
		cout << "price: " << store[i].price << endl << endl;
	}
}
/*
enter max number of items:
2
enter 0-5:
1
enter code:
500
enter name:
coca cola
enter amount:
50
enter minimum amount:
100
enter price:
3.90
enter 0-5:
1
enter code:
501
enter name:
water
enter amount:
150
enter minimum amount:
100
enter price:
2.9
enter 0-5:
1
enter code:
500
enter name:
coca cola
enter amount:
20
enter minimum amount:
100
enter price:
4.90
enter 0-5:
2
enter code:
502
ERROR
enter 0-5:
2
enter code:
500
price: 4.9
enter 0-5:
3
enter code:
501
enter amount:
80
enter 0-5:
4
item name: coca cola
code: 500
amount to order: 35
item name: water
code: 501
amount to order: 35
enter 0-5:
5
name: coca cola
code: 500
amount: 105
minimum amount: 100
price: 4.9

name: water
code: 501
amount: 105
minimum amount: 100
price: 2.9

enter 0-5:
0
*/