/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 3 question 2
the project make a diference if the number is the bigger of the 3
or the smallest or the midelle
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "enter 3 numbers:" << endl;
	int number, first, last;
	cin >> first >> last >> number;

	if (number >= first && number <= last)
		cout << "between" << endl;
	else
		if (number < first && number< last)
			cout << "smaller" << endl;
		else
			cout << "bigger" << endl;

	return 0;

/*
enter 3 numbers:
3
10
5
between

enter 3 numbers:
10
5
2
smaller

enter 3 numbers:
2
5
11
bigger
*/
}