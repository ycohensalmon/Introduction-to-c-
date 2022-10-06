/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 11 question 3
The project gets an array of numbers and sorts it in ascending order recursively
*/
#include <iostream>
using namespace std;

void swap(int*, int, int);

int smallest(int*, int);

void sort(int*, int);

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
	for (int i = 0; i < num; i++)    // input of the array
		cin >> arr[i];

	cout << "before: \n";
	for (int i = 0; i < num; i++)  // print the array before the short 
		cout << arr[i] << " ";
	cout << endl;

	sort(arr, num);

	cout << "after: \n";
	for (int i = 0; i < num; i++) // print the array before the short 
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

int smallest(int* arr, int num)  /******** The function finds the small number recursively **************/
{
	if (num == 1)                             // Stop conditions ! when number one remains in the array
		return 0;

	int small = smallest(arr + 1, num - 1); // Promotes the array by 1 and if so then also reduces its size

	if (arr[0] < arr[small + 1])            // check If the first number in the array is the smallest
		return 0;                    // Returns first place in the array
	else
		return small + 1;       // Returns place in the array
}

void sort(int* vec, int numb) /****** The function sorts the array in ascending order ********/
{
	if (numb==1)                       // Stop conditions !
		return;

	int index = smallest(vec, numb); // Keeps the small number in the "index"

	swap(vec, 0, index);           // Reverses the order between the small index and the first index in the array

	sort(vec + 1, numb - 1);     // Decreases the array by one
}

/*
enter a number:
15
enter array values: 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
before:
15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
after:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
*/