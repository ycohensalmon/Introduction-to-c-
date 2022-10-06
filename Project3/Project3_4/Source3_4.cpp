/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 3 question 4
the project calcul if the triengle he is equilateral or isosceles
or scalene or he cannot form a triangle 
*/
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "enter 3 numbers:" << endl;
	cin >> num1 >> num2 >> num3;

	if (num1 == num2 && num2 == num3)
		cout << "equilateral triangle" << endl;
	else
		if (num1 == num2 || num1 == num3 || num3 == num2)
			cout << "isosceles triangle" << endl;
		else
			if (num1 + num2 > num3 && num1 + num3 > num2 && num3 + num2 > num1)
				cout << "scalene triangle" << endl;
			else
				cout << "cannot form a triangle" << endl;

	return 0;
/*
enter 3 numbers:
4
4
4
equilateral triangle



enter 3 numbers:
4
4
5
isosceles triangle


enter 3 numbers:
6
7
8
scalene triangle



enter 3 numbers:
1
8
10
cannot form a triangle

*/
}