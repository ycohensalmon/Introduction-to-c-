/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 2 question 6
my project make 4 arithmetic operations
*/
#include <iostream>
using namespace std;

int main()
{
	int x, y, sum, depr, mult;
	float div;
	cout << ("enter two numbers:") << endl;
	cin >> x >> y;
	sum = x + y;
	depr = x - y;
	mult = x * y;
	div = (float)x / y;
	cout << x << "+" << y << "=" << sum << endl;
	cout << x << "-" << y << "=" << depr << endl;
	cout << x << "*" << y << "=" << mult << endl;
	cout << x << "/" << y << "=" << div << endl;
	return 0;

	/*
enter two numbers:
7
2
7+2=9
7-2=5
7*2=14
7/2=3.5
	*/
}