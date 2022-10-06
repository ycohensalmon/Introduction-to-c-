/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 3 question 5
the project make a diference between 3 numbers and
arrange the numbers from the smallest to the biggest
*/
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3, smallest, middle, biggest;
	cout << "enter 3 numbers:" << endl;
	cin >> num1 >> num2 >> num3;

	    // if num1 he is the biggest //
	if (num1 >= num2 && num1 >= num3)
	{
		biggest = num1;
	
		if (num3 >= num2)
		{
			middle = num3;
			smallest = num2;
		}
		else
		{
			middle = num2;
			smallest = num3;
		}
	}
	
		// if num3 he is the biggest //
	if (num3 >= num2 && num3 >= num1)
	{
		biggest = num3;
		if (num2 >= num1)
		{
			middle = num2;
			smallest = num1;
		}
		else
		{
			middle = num1;
			smallest = num2;
		}
	}

		// if num2 he is the biggest //
	if (num2 >= num3 && num2 >= num1)
	{
		biggest = num2;
		if (num3 >= num1)
		{
			middle = num3;
			smallest = num1;
		}
		else
		{
			middle = num1;
			smallest = num3;
		}
	}

	cout << smallest << " " << middle << " " << biggest << endl;
	return 0;

}