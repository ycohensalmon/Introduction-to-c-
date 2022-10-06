/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 4 question 6
The program checks whether the number I enter
then the last spa is larger each time in one of the previous or not
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "enter a number:" << endl;
	int number, temp1, temp2;
	cin >> number;

	//if the number he is negative
	while (number <= 0)
	{
		cout << "ERROR" << endl;
		cin >> number;
	}

	bool flag=true;


	//if the number he is smaller from 10
	if (number <10)
	{
		cout << "YES";
	}
	else
	{
		while (number >= 10)
		{
			temp2 = (number/10)%10;
			temp1 = number % 10;

			if ((temp1 + 1) != temp2)
			{
				flag = false;
				break;
			}
			number = number / 10;
		}
		if (flag == false)
			cout << "NO";
		else
			cout << "YES";
	}
	return 0;

	/*
enter a number:
8765
YES


enter a number:
8547
NO

	*/
}