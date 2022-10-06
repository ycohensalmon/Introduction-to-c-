/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 6 question 3
the project gets an array and sorts all the multiples so i get a new array with once each number,
in addition counts the number of membres in the array after soting
*/

#include <iostream>
using namespace std;
void new_vector(int arr[],int number);

int main()
{
	int vector[100];
	int number = 0, sum = 0;
	cout << "enter up to 100  values, to stop enter 0:" << endl;
	for (int i = 0; i < 100; i++) //creat a array until 100
	{
		cin >> vector[i];
		while (vector[i]<0)  //if the number is negative
		{
			cout << "ERROR" << endl;
			cin >> vector[i];
		}

		if (vector[i] == 0) //when the number is 0 the array stop
		{
			number = i;
			break;
		}
	}
	number--;
	new_vector(vector, number);   //call of the fonction
	cout << "the new vector is:" << endl;
	for (int i = 0; i <= number; i++)  
	{
		if (vector[i] != 0)   //print single numbers without duplicates
		{
			cout << vector[i] << " ";
			sum++;
		}
	}
	cout << endl << "number of elements: " << sum;
	return 0;
}

void new_vector(int arr[], int number)
{
	for (int i = 0; i <= number; i++) //the first number
	{
		for (int j = (i + 1); j <= number; j++) // the seconde numbers to compare to the first
		{
			if (arr[i] == arr[j])   //check if the numbers are equale
			{
				arr[j] = 0;
			}
		}
	}
} 
/*
enter up to 100  values, to stop enter 0:
1
4
5
2
-9
ERROR
5
1
2
0
the new vector is:
1 4 5 2
number of elements: 4
*/