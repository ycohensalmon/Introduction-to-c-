/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 7 question 2
The project merges 3 arrays in no descending order with each array on its own arranged in ascending order.
The array does not accept negative numbers and stops accepting values when the number 0 enters the array
*/
#include <iostream>
using namespace std;
void condition_for_arr(int arr[])
{
	bool flag = true;

	do
	{
		flag = true;

		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];  //the input of the array

			if (arr[i - 1] <= arr[i] && i>0) // Check whether the array is sorted in descending order
				flag = false;

			if (arr[i] < 0 )  // Check if there are negative numbers in the array
				flag = false;

			if (arr[i] == 0) //Stops the array when there is 0
				break;
		}

		if (flag==false) // If one of the previous conditions is incorrect
			cout << "ERROR" << endl;
	} while (flag==false); // As long as one of the conditions is not met

}

void merge(int mizoug[], int arr1[], int arr2[])
{
	int i = 0, j = 0, k = 0;
	while (i < 10 && j < 10) 
	{
		if (arr1[i] >= arr2[j]) 
			mizoug[k] = arr1[i++]; //If the number in the first array is larger
		else
			mizoug[k] = arr2[j++]; //If the number in the seconde array is larger
		k++;
	}
	while (i< 10) // When the numbers in one of the arrays run out
		mizoug[k++] = arr1[i++];

	while (j< 10) // When the numbers in one of the arrays run out
		mizoug[k++] = arr2[j++];


}
int main()
{
	int number1[10]{ 0 };
	int number2[10]{ 0 };
	int number3[10]{ 0 };
	int mizoug[30]{ 0 };
	int temp[30]{ 0 };
	cout << "enter values for the first vector:" << endl;
	condition_for_arr(number1);
	cout << "enter values for the second vector:" << endl;
	condition_for_arr(number2);
	cout << "enter values for the third vector:" << endl;
	condition_for_arr(number3);
	cout << "merged vector is:" << endl;

	merge(temp, number1, number2);
	merge(mizoug, temp, number3);

	for (int i = 0; i < 30; i++) // Prints the array without the zeros
		if (mizoug[i])
			cout << mizoug[i] << " ";

	return 0;
}
/*
enter values for the first vector:
100 45 78 2 0
ERROR
100 -9 78 0
ERROR
100 45 12 11 10 0
enter values for the second vector:
87 54 32 21 20 10 0
enter values for the third vector:
98 65 54 32 21 0
merged vector is:
100 98 87 65 54 54 45 32 32 21 21 20 12 11 10
*/