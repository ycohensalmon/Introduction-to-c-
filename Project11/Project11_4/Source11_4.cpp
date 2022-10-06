/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 11 question 4
The project The project makes the places between the first and last and between the second and second from the end etc. recursively
*/

#include <iostream>
using namespace std;

void swap(int*, int, int);

void reverse(int*, int);

int main()
{
	int* arr;
	int num;
	do
	{
		cout << "enter a number:" << endl;
		cin >> num;

		if (num <= 0)
			cout << "ERROR" << endl;     // when the input is not correct

	} while (num <= 0);

	arr = new int[num];

	cout << "enter array values: ";
	for (int i = 0; i < num; i++)     // input of the array
		cin >> arr[i];

	cout << "before: \n";
	for (int i = 0; i < num; i++)   // print the array before the reversion 
		cout << arr[i] << " ";
	cout << endl;

	reverse(arr, num);

	cout << "after: \n";
	for (int i = 0; i < num; i++) // print the array before the reversion 
		cout << arr[i] << " ";
	cout << endl;

	delete [] arr;            // Releases the memory
	return 0;
}

void swap(int a[], int i, int j) /********** The function swaps places of 2 members in the array *******/
{
	int temp = a[i]; // Saves first place in temporary variable
	a[i] = a[j];    // Copies second place to first place
	a[j] = temp;   // Returns what is in the temporary variable, to the second place
}

void reverse(int* arr, int num)
{
	/****** The function sends the first and last place in the array to another function to make the places *******/

	if (num/2 == 0)             // Stop conditions !
		return;

	swap(arr, 0,num-1);        // Reverses the order between the first and the last

	reverse(arr+1 ,num-2);    // Promotes the array in one place and reduces the size by 2
}
/*
enter a number:
10
enter array values: 4 5 8 7 2 1 5 8 7 10
before:
4 5 8 7 2 1 5 8 7 10
after:
10 7 8 5 1 2 7 8 5 4
*/