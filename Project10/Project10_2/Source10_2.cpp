/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 10 question 2
the project reverses the order of the words the user enters
*/
#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#pragma warning (disable:4996)
using namespace std;
void change(int letters_in_word, char* ch, int i, int conteur) // reverses the order of the words
{
	char temp;
	
	for (int j = 0; j < letters_in_word /2; j++)
	{
		temp = *(ch + conteur + j);               // Saves the first value in "temp"
		*(ch + conteur + j) = *(ch + i - j - 1); // Put the last entry in the first
		*(ch + i - 1 - j) = temp;               // Put the "temp" in the last value
	}
}
char reverse(char* ch) // Checks when the order needs to be reversed
{
	int letters_in_word = 0;
	int conteur = 0;
	char stop = ' ';
	bool flag = false;

	for (int i = 0;flag==false; i++) // It's worth to "false" when the sentence is over
	{
		letters_in_word++;

		if (*(ch + i)==stop) // End of a word
		{
			letters_in_word--;                        // "--" Because he also counted the space after the word
			change(letters_in_word, ch, i,conteur);
			conteur = conteur + letters_in_word +1;  // Count all the words without the current letter
			letters_in_word = 0;                    // Resets the conteur of the number of letters in a word
		}
		if (i == strlen(ch) - 1) // the sentence is over
		{
			flag = true; // To get out of the loop
			i++;
			change(letters_in_word, ch, i, conteur);
		}
			
	}


	return *ch;
}
int main()
{
	char sentence[81];
	cout << "Enter a string: " << endl;
	cin.getline(sentence, 81); // It only gets 80 because the last one is reserved for "/0"

	cout << "After reverse:" << endl;
	reverse(sentence);
	puts(sentence);

	return 0;
}
/*
Enter a string:
my name is yossef cohen salmon
After reverse:
ym eman si fessoy nehoc nomlas
*/