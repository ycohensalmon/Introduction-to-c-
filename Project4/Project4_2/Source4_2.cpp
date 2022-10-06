/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 4 question 2
The program lets the user enter only positive numbers and then lets me enter
Numbers at the end until the messages reach the second number I entered at the beginning
Or up to the sum of the first number
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "enter 2 positive numbers:" << endl;
	int num1, num2, num3;

	// the value of num1
	cin >> num1;
	while (num1<0)
	{
		cout << "ERROR" << endl;
		cin >> num1;
	}

	// the value of num2
	cin >> num2;
	while (num2<0)
	{
		cout << "ERROR" << endl;
		cin >> num2;
	}

	cout << "enter a list of numbers:" << endl;
	int sum_num = 0;
	int	sum_total = 0;

	while (sum_num < num2 && sum_total <= num1)
	{
		cin >> num3;
		++sum_num;
		sum_total = sum_total + num3;
	}
	cout << sum_total;
	return 0;

	/*
enter 2 positive numbers:
40
-50
ERROR
3
enter a list of numbers:
2 5 8
15
	*/
}