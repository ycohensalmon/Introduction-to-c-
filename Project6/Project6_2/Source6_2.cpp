/*
Yossef Cohen-Salmon
317805588
computer science introduction 150005.2.5781
exercise 6 question 2
the project count the number of times that the seconde array is included in the first array
*/

#include <iostream>
using namespace std;

int main()
{
	int vector1[500], vector2[100];
	int size1, size2, result = 0;

	cout << "enter size of first array:" << endl;
	cin >> size1;
	cout << "enter first array values:" << endl;

	for (int i = 0; i < size1; i++) //input for the vector1
	{
		cin >> vector1[i];
		if (vector1[i]<0) //if the number is smallest than 0
		{
			cout << "ERROR" << endl;
			cin >> vector1[i];
		}
	}

	cout << "enter size of second array:" << endl;

	cin >> size2;
	cout << "enter second array values:" << endl;

	for (int i = 0; i < size2; i++) //input for the vector2
	{
		cin >> vector2[i];
		if (vector2[i] < 0) //if the number is smallest than 0
		{
			cout << "ERROR" << endl;
			cin >> vector2[i];
		}
	}

	for (int i = 0; i < size1; i++) // the place in the first array
	{
		int a = 0, conteur = 0;
		for (int j = 0; j < size2; j++) // the place in the seconde array
		{
			if (vector2[a] == vector1[j + i]) //if the number in the first array is equal to the number of the seconde array
			{
				conteur += 1;
				a++;
			}
			else
			{
				a++;
			}

			if (conteur == size2) //count the number of times 
			{
				result += 1;
			}
		}
	}

	cout << "result: " << result << "  times" << endl;
	return 0;
}
