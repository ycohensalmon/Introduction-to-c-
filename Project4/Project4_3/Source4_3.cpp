/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 4 question 3
The project computes a series for me and gives me the number of organs I request
*/
#include <iostream>
using namespace std;

int main()
{
	int a1 = 0, a2 = 1;
	int sum, temp, n;
	cout << "enter a number:" << endl;
		cin >> n;
		if (n<0)
		{
			cout << "ERROR" << endl;
			cin >> n;
		}
		cout << "0 ";
			for (int i = 0; i < n; i++)
			{
				sum = a1 + a2;
				cout << sum << " ";
				temp = a2;
				a2 = a1;
				a1 = sum;
			}
			return 0;
/*
enter a number:
-10
ERROR
10
0 1 1 2 3 5 8 13 21 34 55
*/
}