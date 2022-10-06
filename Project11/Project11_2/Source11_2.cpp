/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 11 question 2
The project find the smallest number of the orray
*/
#include <iostream>
using namespace std;
int smallest(int*, int);
int main()
{
	int* arr;
	int num;
	do
	{
		cout << "enter a number:" << endl;
		cin >> num;

		if (num <= 0)                  
			cout << "ERROR" << endl;   // when the input is not correct

	} while (num <= 0);

	arr = new int[num];
	cout << "enter array values: ";

	for (int i = 0; i < num; i++)  // input of the array
		cin >> arr[i];

	cout << "the smallest is: " << arr[smallest(arr, num)] << endl;
	delete[] arr; // Releases the memory
	return 0;

}
int smallest(int*arr, int num)  /******** The function finds the small number recursively **************/
{
	if (num == 1)                             // Stop conditions ! when number one remains in the array
		return 0;

	int small = smallest(arr + 1, num - 1); // Promotes the array by 1 and if so then also reduces its size

  	if (arr[0] < arr[small+1])            // check If the first number in the array is the smallest
		return 0;                    // Returns first place in the array
	else
		return small+1;       // Returns place in the array
}
/*
enter a number:
7
enter array values: 5 4 8 3 4 8 2
the smallest is: 2
*/
