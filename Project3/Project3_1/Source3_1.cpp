/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 3 question 1
the project divise between the even number and the odd number 
and for the even numbres the project multiple number one by two 
and for the odd numbers the project add the number to one another
and for neither the^project print mixed number
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "enter a number:" << endl;
	unsigned int number, first, seconde;
	cin >> number;
	first = number / 10;
	seconde = number % 10;

	if (number>9 && number<100)
	{
		if (!(first%2) && !(seconde%2))
		{
			cout << "even digits only" << endl;
			cout << first * seconde;
		}
		else
		{
			if ((first%2) && (seconde%2))
			{
				cout << "odd digits only" << endl;
				cout << first + seconde;
			}
			else
			{
				cout << "mixed number" << endl;
			}
		}
	}
	else
		cout << "ERROR";

	return 0;

	/*
enter a number:
19
odd digits only
10

enter a number:
28
even digits only
16

enter a number:
74
mixed number
	*/
}