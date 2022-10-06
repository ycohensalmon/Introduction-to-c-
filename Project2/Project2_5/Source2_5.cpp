/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 2 question 5
my program make a change between the first place
and the last place and give me the first - laste and the last - first
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "enter two numbers:" << endl;
	unsigned int x;
	unsigned int y;
	cin >> x;
	cin >> y;
	cout << "x=" << x << " ,y=" << y << endl;
	int number;
	/*
	the "number" is variable that help me to change the x and y
	*/
	number = y;
	y = x;
	x = number;
	cout << "x=" << x << " ,y=" << y << endl;
	return 0;

	/*
enter two numbers:
5
2
x=5 ,y=2
x=2 ,y=5
	*/
}