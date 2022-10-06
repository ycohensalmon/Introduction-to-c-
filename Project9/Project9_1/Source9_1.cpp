/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 9 question 1
the project Gives me the option to add hybrid classes to the database
and also to download as well as perform a search of whether the class is located and also by the class code
*/
#include <iostream>
using namespace std;
void insertSort(int*& vec, int size)
{
	int first, i;
	for (first = 1; first < size; first++) //Sorting function in ascending order
	{
		int tmp = *(vec + first);
		for (i = first; i > 0 && tmp < *(vec + i - 1); i--)
			*(vec + i) = *(vec + i - 1);
		*(vec + i) = tmp;
	}
}
void condition(int* number)
{
	while (*number <= 9999 || *number >= 99999) // while the number is not with 5 digits
	{
		cout << "ERROR" << endl;
		cin >> *number;
	}
}
void newClass(int*& database,int& size, int* code)
{
	bool flag = true;

	for (int i = 0; i < size; i++)
		if (*(database + i) == *code) // check if the number he is in the array
		{
			flag = false;
			break;
		}

	if (flag == true) // If the number is not yet in the database
	{
		/*
		///////////////////////// Explanation of the function //////////////////////////////////
		When I want to increase the size of the dynamic array then the array forgets the previous values
		that were in the array so I have to move the values to a dynamic array auxiliary "temp",
		then increase the array "database" and then move back if the values from the "temp" array to "database" array
		*/

		int* temp = new int[++size];    // Defines the dynamic array with one additional space
		for (int i = 0; i < size - 1; i++)
			*(temp + i) = *(database + i);  // Transfer of the array to a temporary array

		*(temp + size - 1) = *code; // Puts the class code in the last place of the temporary array

		delete[]database; 
		database = temp; // Transfer of the entire temporary array to the new "database" dynamic array

		insertSort(database, size);
	}
}
void delClass(int*& database, int& size, int* code)
{
	for (int w = 0; w < size; w++)
		if (*(database + w) == *code) // check if the number he is in the array
		{
			for (int j = w; j < size; j++) // when the number he is in the array 
			{
				*(database + j) = *(database + j + 1); // change the places
			}

			int* temp = new int[--size];    // Defines the dynamic array with one additional space
			for (int i = 0; i < size; i++)
				*(temp + i) = *(database + i);  // Transfer of the array to a temporary array

			delete[]database;
			database = temp; // Transfer of the entire temporary array to the new "database" dynamic array

			break;
		}


}
void printAll(int*& database, int size)
{
	for (int i = 0; i < size; i++) // Prints all the organs in the array
		if (*(database + i) > 0) // Greater than 0
			cout << *(database + i) << " ";
}
int* searchClass(int*& database, int& size, int* code)
{
	bool flag = false;
	for (int i = 0; i < size; i++)
		if (*(database + i) == *code) // check if the number he is in the array
		{
			flag = true;
			break;
		}

	if (flag==true)
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
void printCode(int*& database, int& size, int* code)
{
	bool flag = false;
	for (int i = 0; i < size; i++)
		if (*(database + i) / 1000 == *code) // Checks if there is a code that matches the number
		{
			flag = true;
			cout << *(database + i) << " ";
		}
	if (flag == true)
		cout << endl;

}
enum cases { new_class = 0, del_class, search_class, print_code, print_All, stop };
int main()
{
	int size = 0;
	int* database = new int[size];

	cout << "Enter 0 to add a new classroom." << endl;
	cout << "Enter 1 to delete a hybrid classroom." << endl;
	cout << "Enter 2 to search for a specific classroom." << endl;
	cout << "Enter 3 to print all the classsrooms for a specific Machon." << endl;
	cout << "Enter 4 to print all the hybrid classrooms." << endl;
	cout << "Enter 5 to exit." << endl;
	cout << "Enter your choice: ";

	int num, code;
	bool flag = true;

	while (flag == true)
	{
		cin >> num;
		switch (num)
		{
		case new_class: // when the chois is 0
		{
			cout << "Enter the code of the classroom to add: " << endl;
			cin >> code;
			condition(&code);
			newClass(database,size, &code);
			printAll(database, size);
			cout << endl << "Enter your next choice: " << endl;
		}
		break;
		case del_class:  // when the chois is 1
		{
			cout << "Enter the code of the classroom to delete: " << endl;
			cin >> code;
			condition(&code);
			delClass(database, size, &code);
			printAll(database, size);
			cout << endl << "Enter your next choice: " << endl;
		}
		break;
		case search_class:  // when the chois is 2
		{
			cout << "Enter the code of the classroom to search for: " << endl;
			cin >> code;
			condition(&code);
			searchClass(database, size, &code);
			cout << "Enter your next choice: " << endl;
		}
		break;
		case print_code:  // when the chois is 3
		{
			cout << "Enter the code of the Machon: " << endl;
			cin >> code;
			while (code <= 9 || code >= 99) // while the number is not with 2 digits
			{
				cout << "ERROR" << endl;
				cin >> code;
			}
			printCode(database, size, &code);
			cout << "Enter your next choice: " << endl;
		}
		break;
		case print_All:  // when the chois is 4
		{
			printAll(database, size);
			cout << endl << "Enter your next choice: " << endl;
		}
		break;
		case stop: {flag = false; }  // when the chois is 5
				 break;
		default:  // when the chois is not correct
		{
			cout << "ERROR" << endl;
			cout << "Enter your next choice: " << endl;
		}
		break;
		}
	}
}
/*
Enter 0 to add a new classroom.
Enter 1 to delete a hybrid classroom.
Enter 2 to search for a specific classroom.
Enter 3 to print all the classsrooms for a specific Machon.
Enter 4 to print all the hybrid classrooms.
Enter 5 to exit.
Enter your choice: 0
Enter the code of the classroom to add:
11111
11111
Enter your next choice:
0
Enter the code of the classroom to add:
11112
11111 11112
Enter your next choice:
0
Enter the code of the classroom to add:
12312
11111 11112 12312
Enter your next choice:
0
Enter the code of the classroom to add:
12111
11111 11112 12111 12312
Enter your next choice:
2
Enter the code of the classroom to search for:
11
ERROR
11111
found
Enter your next choice:
2
Enter the code of the classroom to search for:
45645
not found
Enter your next choice:
3
Enter the code of the Machon:
11
11111 11112
Enter your next choice:
4
11111 11112 12111 12312
Enter your next choice:
1
Enter the code of the classroom to delete:
11111
11112 12111 12312
Enter your next choice:
5
*/