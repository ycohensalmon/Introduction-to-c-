/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 10 question 1
the project Turns all the small foreign letters in the alphabetical order and the other letters and symbols remain the same
*/
#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

/*int crypto(char* ch)
{
	char min = 'a';
	char max = 'z';
	for (int i = 0; i < strlen(ch); i++) // Rotates as the number of members in the string
	{
		if (min <= *(ch + i)&& *(ch + i)<= max) // If the number is greater than 'a' and less than 'z'
			*(ch + i) = max - *(ch + i) + min;  // Makes the order
	}
	return *ch;
}
*/

int main()
{
	char enter_ascii = '\n';

	char ch[5]{ 0 };
	cout << "Enter a string:" << endl;

	int i = 0;
	while (ch[i] != enter_ascii)
	{
		ch[i++] = getche();

		if (i>=4)
		{
			cout << endl << "ERROR" << endl;
			i = 0;
		}
	}

	cout << endl << "After crypto:" << endl;
	//crypto(ch);
	puts(ch);

	return 0;
}
