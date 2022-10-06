
/*#include <iostream>
using namespace std;
void insertSort(int* vec, int size)
{
	int first, i;
	for (first = 1; first <= size; first++) //Sorting function in ascending order
	{
		int tmp = *(vec+first);
		for (i = first; i > 0 && tmp < *(vec+i-1); i--)
			*(vec + i) = *(vec + i - 1);
		*(vec + i) = tmp;
	}
}
void condition(int number)
{
	while (number <= 9999 || number >= 99999) // while the number is not with 5 digits
	{
		cout << "ERROR" << endl;
		cin >> number;
	}
		
}
void newClass(int* database, int code)
{
	int static index = 0;  // Count the number of members in the array
	bool flag = true;

	for (int i = 0; i <= index; i++)
		if (*(database + i) == code) // check if the number he is in the array
		{
			flag = false;
			break;
		}

	if (flag == true) // If the number is not yet in the database
	{
		*(database + index) = code;
		insertSort(database, index);
		index++;
	}
}
void delClass(int* database, int code, int size)
{
	for (int i = 0; i < size; i++)
		if (*(database + i) == code) // check if the number he is in the array
			for (int j = i; j < size; j++) // when the number he is in the array 
			{
				*(database + j) = *(database + j + 1); // change the places
			}
}
void printAll(int* database, int size)
{
	for (int i = 0; i < size; i++) // Prints all the organs in the array
		if (*(database + i)>0) // Greater than 0
			cout << *(database + i) << endl;
}
int* searchClass(int* database, int size, int code)
{
	for (int i = 0; i < size; i++)
		if (*(database + i) == code) // check if the number he is in the array
		{
			cout << "found" << endl;
			return database;
		}
		else
		{
			cout << "not found" << endl;
			return NULL;
		}
}
void printCode(int* database, int size, int code)
{
	for (int i = 0; i < size; i++)
		if (*(database + i) / 1000 == code) // Checks if there is a code that matches the number
		{
			cout << *(database + i) << " ";
		}
}

enum cases { new_class = 0, del_class, search_class, print_code, print_All, stop };
int main()
{
	int const size = 50;
	int database[size]{ 0 };
	cout << "Enter 0 to add a new classroom." << endl;
	cout << "Enter 1 to delete a hybrid classroom." << endl;
	cout << "Enter 2 to search for a specific classroom." << endl;
	cout << "Enter 3 to print all the classsrooms for a specific Machon." << endl;
	cout << "Enter 4 to print all the hybrid classrooms." << endl;
	cout << "Enter 5 to exit." << endl;
	cout << "Enter your choice: ";

	int num,code;
	bool flag = true;

	while (flag == true)
	{
		cin >> num;
		switch (num)
		{
		case new_class:
		{
			cout << "Enter the code of the classroom to add: " << endl;
			cin >> code;
			condition(code);
			newClass(database,code);
			printAll(database, size);
			cout << "Enter your next choice: " << endl;
		}
			break;
		case del_class:
		{
			cout << "Enter the code of the classroom to delete: " << endl;
			cin >> code;
			condition(code);
			delClass(database, code, size);
			printAll(database, size);
			cout << "Enter your next choice: " << endl;
		}
			break;
		case search_class:
		{
			cout << "Enter the code of the classroom to search for: " << endl;
			cin >> code;
			condition(code);
			searchClass(database, size, code);
			cout << "Enter your next choice: " << endl;
		}
			break;
		case print_code:
		{
			cout << "Enter the code of the Machon: " << endl;
			cin >> code;
			while (code <= 9 || code >= 99) // while the number is not with 2 digits
			{
				cout << "ERROR" << endl;
				cin >> code;
			}
			printCode(database, size, code);
			cout <<  "Enter your next choice: " << endl;
		}
			break;
		case print_All:
		{
			printAll(database, size);
			cout << "Enter your next choice: " << endl;
		}
			break;
		case stop: {flag = false;}
			break;
		default:
		{
			cout << "ERROR" << endl;
			cout << "Enter your next choice: " << endl;
		}
			break;
		}
	}
}*/



/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 8 question 2
the project Gives me the option to add hybrid classes to the database
and also to download as well as perform a search of whether the class is located and also by the class code
*/

//void insertSort(int* vec, int size)
//{
//	int first, i;
//	for (first = 1; first <= size; first++) //Sorting function in ascending order
//	{
//		int tmp = *(vec + first);
//		for (i = first; i > 0 && tmp < *(vec + i - 1); i--)
//			*(vec + i) = *(vec + i - 1);
//		*(vec + i) = tmp;
//	}
//}
//void condition(int* number)
//{
//	while (*number <= 9999 || *number >= 99999) // while the number is not with 5 digits
//	{
//		cout << "ERROR" << endl;
//		cin >> *number;
//	}
//
//}
//void newClass(int* database, int *code)
//{
//	int static index = 0;  // Count the number of members in the array
//	bool flag = true;
//
//	for (int i = 0; i <= index; i++)
//		if (*(database + i) == *code) // check if the number he is in the array
//		{
//			flag = false;
//			break;
//		}
//
//	if (flag == true) // If the number is not yet in the database
//	{
//		*(database + index) = *code;
//		insertSort(database, index);
//		index++;
//	}
//}
//void delClass(int* database, int *code, int size)
//{
//	for (int i = 0; i < size; i++)
//		if (*(database + i) == *code) // check if the number he is in the array
//			for (int j = i; j < size; j++) // when the number he is in the array 
//			{
//				*(database + j) = *(database + j + 1); // change the places
//			}
//}
//void printAll(int* database, int size)
//{
//	for (int i = 0; i < size; i++) // Prints all the organs in the array
//		if (*(database + i) > 0) // Greater than 0
//			cout << *(database + i) << endl;
//}
//int* searchClass(int* database, int size, int *code)
//{
//	for (int i = 0; i < size; i++)
//		if (*(database + i) == *code) // check if the number he is in the array
//		{
//			cout << "found" << endl;
//			return database;
//		}
//		else
//		{
//			cout << "not found" << endl;
//			return NULL;
//		}
//}
//void printCode(int* database, int size, int *code)
//{
//	for (int i = 0; i < size; i++)
//		if (*(database + i) / 1000 == *code) // Checks if there is a code that matches the number
//		{
//			cout << *(database + i) << " ";
//		}
//}
//enum cases { new_class = 0, del_class, search_class, print_code, print_All, stop };
//int main()
//{
//	int const size = 50;
//	int database[size]{ 0 };
//	int* p_database = database;
//	cout << "Enter 0 to add a new classroom." << endl;
//	cout << "Enter 1 to delete a hybrid classroom." << endl;
//	cout << "Enter 2 to search for a specific classroom." << endl;
//	cout << "Enter 3 to print all the classsrooms for a specific Machon." << endl;
//	cout << "Enter 4 to print all the hybrid classrooms." << endl;
//	cout << "Enter 5 to exit." << endl;
//	cout << "Enter your choice: ";
//
//	int num, code;
//	bool flag = true;
//
//	while (flag == true)
//	{
//		cin >> num;
//		switch (num)
//		{
//		case new_class:
//		{
//			cout << "Enter the code of the classroom to add: " << endl;
//			cin >> code;
//			condition(&code);
//			newClass(p_database, &code);
//			printAll(database, size);
//			cout << "Enter your next choice: " << endl;
//		}
//		break;
//		case del_class:
//		{
//			cout << "Enter the code of the classroom to delete: " << endl;
//			cin >> code;
//			condition(&code);
//			delClass(database, &code, size);
//			printAll(database, size);
//			cout << "Enter your next choice: " << endl;
//		}
//		break;
//		case search_class:
//		{
//			cout << "Enter the code of the classroom to search for: " << endl;
//			cin >> code;
//			condition(&code);
//			searchClass(database, size, &code);
//			cout << "Enter your next choice: " << endl;
//		}
//		break;
//		case print_code:
//		{
//			cout << "Enter the code of the Machon: " << endl;
//			cin >> code;
//			while (code <= 9 || code >= 99) // while the number is not with 2 digits
//			{
//				cout << "ERROR" << endl;
//				cin >> code;
//			}
//			printCode(database, size, &code);
//			cout << "Enter your next choice: " << endl;
//		}
//		break;
//		case print_All:
//		{
//			printAll(database, size);
//			cout << "Enter your next choice: " << endl;
//		}
//		break;
//		case stop: {flag = false; }
//				 break;
//		default:
//		{
//			cout << "ERROR" << endl;
//			cout << "Enter your next choice: " << endl;
//		}
//		break;
//		}
//	}
//}
/*
Enter 0 to add a new classroom.
Enter 1 to delete a hybrid classroom.
Enter 2 to search for a specific classroom.
Enter 3 to print all the classsrooms for a specific Machon.
Enter 4 to print all the hybrid classrooms.
Enter 5 to exit.
Enter your choice: 0
Enter the code of the classroom to add: 22222
22222
Enter your next choice: 0
Enter the code of the classroom to add: 22221
22221
22222
Enter your next choice: 0
Enter the code of the classroom to add: 22220
22220
22221
22222
Enter your next choice: 0
Enter the code of the classroom to add: 55555
22220
22221
22222
55555
Enter your next choice: 0
Enter the code of the classroom to add: 45612
22220
22221
22222
45612
55555
Enter your next choice: 1
Enter the code of the classroom to delete: 22222
22220
22221
45612
55555
Enter your next choice: 2
Enter the code of the classroom to search for: 22222
not found
Enter your next choice: 2
Enter the code of the classroom to search for: 22220
found
Enter your next choice: 3
Enter the code of the Machon: 22
22220 22221
Enter your next choice: 4
22220
22221
45612
55555
Enter your next choice: 8
ERROR
Enter your next choice: 5
*/
