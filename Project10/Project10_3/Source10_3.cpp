/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 10 question 3
The project allows me to build a dictionary that is arranged in a lexicographic order
and I can add words and delete words and search for words
*/
#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#pragma warning (disable:4996)
using namespace std;
void condition(char*& check_if_80, char* word, int size=80)
{
	/*********************Explanation of the function***************************/
	/* The fonction Picks up the word into a temporary array and checks if the
	word contains more than 80 characters, if so it re-picks and checks again */

	cin.getline(check_if_80, 100000);       // Picks up the word for a temporary string

	while (strlen(check_if_80)>size)      // Tests whether greater than 80
	{
		cout << "ERROR" << endl;
		cin.getline(check_if_80, 100000); 
	}
	strcpy(word, check_if_80);     //Transfers the temporary string to the Moroccan string
}
void insertSort(char**& lexicon, char size) 
{ 
	/************Explanation of the function**************/
	// A function sorts the words in a lexicographic order

	char temp[81]{ 0 };
	for (int i = size-2; i >= 0; i--) 
	{
		if (strcmp(lexicon[i], lexicon[i+1]) > 0) //Checks whether the words are sorted
		{
			strcpy(temp,lexicon[i+1]);          // Moves the new word to a temporary string
			strcpy(lexicon[i+1], lexicon[i]); // Promotes the big word to one place ahead
			strcpy(lexicon[i], temp);       // Returns the new word to one place before
		}
	}
}
char* searchStr(char** lexicon, char* word, int size)
{
	/************Explanation of the function*************/
	//The function checks if the word is in the dictionary

	for (int i = 0; i < size; i++)
		if (!strcmp(*(lexicon + i), word))
			return word;
	return NULL;
}
void newStr(char**& lexicon, char* word, int &size)
{
	/***********Explanation of the function*************/
	//The function increases the dynamic string by oneand
	//adds the word entered by the user in the string

	if (!searchStr(lexicon, word, size)) // Checks if the word is in the dictionary
	{
		size = size + 1;                   // Increases the string by one
		char** temp = new char*[size];
		for (int i = 0; i < size-1; i++)
		{
			temp[i] = new char[strlen(lexicon[i])+1]; // Assigns the size of the space by the number of characters in the word
			strcpy(temp[i], lexicon[i]);             // Moves the original string to a temporary string
		}

		temp[size-1] = new char[strlen(word)+1];  // Assigns the place of the word added by the number of characters of the word

		for (int i = 0; i < strlen(word)+1; i++)
			temp[size-1][i] = word[i];           // Put the new word in last place in the temporary string 

		for (int i = 0; i < size-1; i++)
			delete[]lexicon[i];
		delete[]lexicon;

		lexicon = temp;                   // Moves the entire temporary array to the original array
		insertSort(lexicon, size);      // Sends to sort function
	}

}
void delStr(char**& lexicon, char* word, int& size)
{
	/*********Explanation of the function***********/
	// The function reduces the dynamic string by
	// oneand deletes the word entered by the user

	if (searchStr(lexicon, word, size)) // If the word is in the dictionary
	{
		size = size - 1;
		char** temp = new char* [size]; // Defines a new temporary dynamic string with one less place
		int index = 0;
		for (int i = 0; i <= size; i++)
		{
			if (strcmp(lexicon[i], word)) // If the word is not equal
			{
				temp[index] = new char[strlen(lexicon[i]) + 1]; // Assigns the place of the next word
				temp[index++] = lexicon[i];                   // Moves the next word to the previous place
			}
			else
				delete[]lexicon[i]; // Deletes the top of the word
		}

		if (size)
		{
			delete[]lexicon;
			lexicon = temp;  // Moves the temporary string to the original string
		}
		else
			lexicon = NULL; // When all the words have been deleted from the string
	}
}
void printAll(char** lexicon, int size)
{
	/************Explanation of the function**************/
	// This function prints all the words in the dictionary
		for (int i = 0; i < size; i++)
			cout << lexicon[i] << " ";
		cout << endl;
}
void printChar(char** lexicon, char* word, int size)
{
	/************Explanation of the function*************/
	//This function checks all the words in the dictionary,
	// which words start with the same letter
	bool flag = false;

	for (int i = 0; i < size; i++)
		if (!strncmp(lexicon[i], word, 1)) // When there are words in the dictionary that start with the same letter
		{
			cout << lexicon[i] << " ";
			flag = true;
		}

	if (flag == true) // Only if it is true, so that if there are no words in the sorting, that no line has just dropped
		cout << endl; 
}
enum option { new_Str = 0, delete_Str, search_Str, print_Char, print_All, stop };
int main()
{
	int num, size = NULL;
	char** lexicon = new char* [size];
	char* check_if_80 = new char[100000]; // A temporary string that picks up the word
	char enter, word[81];
	bool flag = true;
	 
	while (flag == true)
	{
		cout << "Enter 0-5:" << endl;
		cin >> num;
		cin.get(enter);

		switch (num)
		{
		case new_Str: // When the user presses 0
		{
			cout << "Enter the word:" << endl;
			condition(check_if_80, word);
			newStr(lexicon, word, size);
			printAll(lexicon, size);
		}
		break;
		case delete_Str: // When the user presses 1
		{
			cout << "Enter the word to delete:" << endl;
			condition(check_if_80, word);
			delStr(lexicon, word, size);
			printAll(lexicon, size);

		}
		break;
		case search_Str: // When the user presses 2
		{
			cout << "Enter the word to search for:" << endl;
			condition(check_if_80, word);
			if (searchStr(lexicon, word, size))
				cout << "found" << endl;
			else
				cout << "not found" << endl;
		}
		break;
		case print_Char: // When the user presses 3
		{
			cout << "Enter the char:" << endl;
			condition(check_if_80, word,1);
			printChar(lexicon, word, size);
		}
		break;
		case print_All: { printAll(lexicon, size); } // When the user presses 4
		break;

		case stop: // When the user presses 5
		{
			for (int i = 0; i < size - 1; i++) // Releases the dynamic arrays
				delete[]lexicon[i];
			delete[]lexicon;
			delete[]check_if_80;

			flag = false; // To get out of the loop
		}
		break;

		default: {cout << "ERROR" << endl; }
		break;
		}
	}
}
/*
Enter 0-5:
0
Enter the word:
yossef
yossef
Enter 0-5:
0
Enter the word:
cohen
cohen yossef
Enter 0-5:
2
Enter the word to search for:
yoyo
not found
Enter 0-5:
2
Enter the word to search for:
yossef
found
Enter 0-5:
33
ERROR
Enter 0-5:
3
Enter the char:
y
yossef
Enter 0-5:
4
cohen yossef
Enter 0-5:
1
Enter the word to delete:
yos
cohen yossef
Enter 0-5:
1
Enter the word to delete:
yossef
cohen
Enter 0-5:
5
*/