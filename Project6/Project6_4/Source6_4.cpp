/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 6 question 4
The project arranges for me the organs from the smallest to grow according to the indexes
*/
#include <iostream>
using namespace std;

void fun(double num[], int size, int indices[])
{
	int index = 0;
	double temp = 1, temp2 = 0;
	for (int i = 0; i < size; i++)
	{
		temp = 1;
		for (int j = 0; j < size; j++)
		{
			if (num[j] < temp && num[j]> temp2)//counts in how many indices he is bigger
			{
				temp = num[j];
				index = j;
			}
		}
		indices[i] = index;//initializes the new array
		temp2 = temp;
	}

	cout << "sorted indices:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << indices[i] << " ";
	}
	return;
}

int main()
{
	int const size = 6;
	int conteur = 0;
	double numbers[size]{};
	int indices[size]{};
	cout << "enter  6 numbers between 0 and 1:" << endl;

	while (conteur < size)
	{
		cin >> numbers[conteur];
		if (numbers[conteur] <= 0 || numbers[conteur] >= 1)//If it is greater than 1 or less than 0 
		{
			cout << "ERROR" << endl;
			conteur = 0;
		}
		else
			conteur++;
	}

	fun(numbers, size, indices);//call of fonction
	return 0;
}

/*
enter  6 numbers between 0 and 1:
0.5
5
ERROR
0.5 0.4 0.3 0.8 0.7 0.1
sorted indices:
5 2 1 0 4 3
*/
