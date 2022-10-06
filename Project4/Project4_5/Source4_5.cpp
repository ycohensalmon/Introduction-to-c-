/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 4 question 5
For each number I enter, he gives me the list from the number up to 0,
and in the next row he gives me the same starting from 1 less than
the number entered until it reaches 0
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "enter a one digit number:" << endl;
	int number, temp, conteur =1;

	cin >> number;


	//if the number is negative
	while (number <= 0)
	{
		cout << "ERROR" << endl;
		cin >> number;
	}

	temp = number;
	while (number > 0)
	{
		cout << number;

		//print a row of numbers
		while (number > 1)
		{
			number--;
			cout << ", " << number;
		}
		cout << endl;

		//print a appropriate space before each row 
		for (int i = 0; i < conteur; i++)
		{
			cout << "   ";
		}
		conteur++;
		temp--;
		number = temp;
	}
	return 0;


	/*
enter a one digit number:
8
8, 7, 6, 5, 4, 3, 2, 1
   7, 6, 5, 4, 3, 2, 1
      6, 5, 4, 3, 2, 1
         5, 4, 3, 2, 1
            4, 3, 2, 1
               3, 2, 1
                  2, 1
                     1
	*/
}