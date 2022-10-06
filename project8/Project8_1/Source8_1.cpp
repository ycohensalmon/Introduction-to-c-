/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 8 question 1
the project count the number of jumps between a small array and a large array
*/
#include <iostream>
using namespace std;

void input_arr(int *arr, int *size) // the input of the array
{
	for (int i = 0; i < *size; i++)
		cin >> *(arr+i);

}
void check(int* size)
{
	while (*size < 1 && *size > 80) // check if the input if correct
	{
		cout << "ERROR";
		cin >> *size;
	}
}
int diloug(int* big, int* size_big, int* small, int* size_small) // The function calculates the jump between the arrays
{
	int equal = 0, jump = 0, size = 80, w = 0;
	for (int i = 0; i < *size_big; i++)
	{
		if (*(big + i) == *(small + w)) //When a number from the small array is equal to the large array
		{
			equal++;
			w++;
			jump = i - jump; 
		}
		if (equal == 2) // When there are 2 equal messages in both arrays
		{
			for (int j = i + jump; j < *size_big && *size_small >= w; j += jump)
			{
				if (*(big + j) == *(small + w)) // When a number from the small array is equal to the large array
				{
					equal++;
					w++;
				}
				else
					break; // because there are no a jumps !!!
			}
		}
		if (jump - 1 < size && equal == *size_small) // Put the skip in the variable
			size = jump - 1;

		if (equal > 1) // Reset of all variables
		{
			jump = 0, equal = 0;
			w = 0;
		}
		if (equal == 1 && *size_small == 1) // if the small array equal to 1 and the number in the array equal to one of the number in the big array
			return 0;
	}
	if (size == 80) 
		return -1;
	else
		return size;
}

int main()
{
	int big[80]{ 0 };
	int small[80]{ 0 };
	int size_big, size_small;
	int* p_big = big;
	int* p_small = small;
	cout << "Enter the size of big:" << endl; 
	cin >> size_big;
	check(&size_big);

	cout << "Enter " << size_big << " numbers:"  << endl;
	input_arr(p_big, &size_big);

	cout << "Enter the size of small:" << endl;
	cin >> size_small;
	check(&size_small);

	cout << "Enter " << size_small << " numbers:"   << endl;
	input_arr(p_small, &size_small);

	cout << "Size of jump:" << endl;

	cout << diloug(p_big, &size_big, p_small, &size_small);
	return 0;
}
/*
Enter the size of big:
9
Enter 9 numbers:
1 2 3 4 5 6 7 8 9
Enter the size of small:
3
Enter 3 numbers:
1 4 7
Size of jump:
2
////////////////////////

Enter the size of big:
9
Enter 9 numbers:
1 2 3 4 5 6 7 8 9
Enter the size of small:
3
Enter 3 numbers:
1 4 8
Size of jump:
-1
*/



/*
void input_arr(int *arr, int size) // the input of the array
{
	for (int i = 0; i < size; i++)
		cin >> *(arr+i);

}
void check(int size)
{
	while (size < 1 && size > 80) // check if the input if correct
	{
		cout << "ERROR";
		cin >> size;
	}
}
int diloug(int* big, int size_big, int* small, int size_small) // The function calculates the jump between the arrays
{
	int equal = 0, jump = 0, size = 80, w = 0;
	for (int i = 0; i < size_big; i++)
	{
		if (*(big + i) == *(small + w)) //When a number from the small array is equal to the large array
		{
			equal++;
			w++;
			jump = i - jump;
		}
		if (equal == 2) // When there are 2 equal messages in both arrays
		{
			for (int j = i + jump; j < size_big && size_small >= w; j += jump)
			{
				if (*(big + j) == *(small + w)) // When a number from the small array is equal to the large array
				{
					equal++;
					w++;
				}
				else
					break; // because there are no a jumps !!!
			}
		}
		if (jump - 1 < size && equal == size_small) // Put the skip in the variable
			size = jump - 1;

		if (equal > 1) // Reset of all variables
		{
			jump = 0, equal = 0;
			w = 0;
		}
		if (equal == 1 && size_small == 1) // if the small array equal to 1 and the number in the array equal to one of the number in the big array
			return 0;
	}
	if (size == 80)
		return -1;
	else
		return size;
}

int main()
{
	int big[80]{ 0 };
	int small[80]{ 0 };
	int size_big, size_small;

	cout << "Enter the size of big:" << endl;
	cin >> size_big;
	check(size_big);

	cout << "Enter " << size_big << " numbers:"  << endl;
	input_arr(big, size_big);

	cout << "Enter the size of small:" << endl;
	cin >> size_small;
	check(size_small);

	cout << "Enter " << size_small << " numbers:"   << endl;
	input_arr(small, size_small);

	cout << "Size of jump:" << endl;

	cout << diloug(big, size_big, small, size_small);
	return 0;
}
*/