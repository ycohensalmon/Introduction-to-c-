/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 11 question 1
The project Gets a number and prints "a" and "b" for me recursively
*/
#include <iostream>
using namespace std;

void printABs(int);
int main()
{
	int num;
	cout << "enter a number:" << endl;
	cin >> num;
	printABs(num); // Call to function
	return 0;
}

void printABs(int a) // the fonction prints "a" and "b" for me recursively
{
	if (a == 0) // Stop condition when "a" is equal to 0
		return;
	cout << 'a';
	printABs(a-1); // Recursive
	cout << 'b';
}
/*
enter a number:
10
aaaaaaaaaabbbbbbbbbb

enter a number:
20
aaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbb
*/