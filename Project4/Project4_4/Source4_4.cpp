/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 4 question 4
The project calculates the sequences of the series for each organ I tell it,
when I enter a number smaller than 0 it will give me an error
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "enter 2 numbers:" << endl;
	int n;
	float X, sum, num;
	cin >> X >> n;

	//if the number is negative
	while (0 >= n)
	{
		cout << "ERROR" << endl;
		cin >> n;
	}


	sum = X;
	for (int i = 2; i <= n; i++)
	{
		num = 1;
		for (int j = (2 * i - 1); j > 0; j--)
			num *= X;
			if (i % 2 == 0)//Calculate whether the number is even or odd
			{
				sum +=(-1.0 / (2 * i - 1)) * num;
			}
			else
			{
				sum +=(1.0 / (2 * i - 1)) * num;
			}
	}
	cout << sum;
	return 0;

	/*
enter 2 numbers: 
3
-2
ERROR
-42
ERROR
2
-6

	*/
}