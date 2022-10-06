/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 6 question 1
my project check if the array has all the number between 15 and 1 one time
if yes eh print good if not he print not good
*/
#include <iostream>
using namespace std;

bool arrange(int *temp);
int main()
{
	int const size = 15;
	int number[size];
	int* temp = number;
	cout << "enter 15 numbers:" << endl;

	for (int i = 0; i < size; i++)
		cin >> number[i];

	for (int i = 0; i < size; i++)//if there is a number negative in the array
	{
		while (number[i] < 1)
		{
			cout << "ERROR" << endl;
			for (int j = 0; j < size; j++)//recapture the array
				cin >> number[j];
		}
	}
	
	if (arrange(number) == true)//calling to the fonction
		cout << "GOOD" << endl;
	else
		cout << "NOT GOOD" << endl;

	return 0;
}
bool arrange(int *temp)
{
	bool flag = true;
	int sum = 0;
	for (int j = 0; j < 15; j++)//find if is true or false
		sum += *temp++;
	
	if (sum == 120)
		flag = true;
	else
		flag = false;
	return flag;
}
/*
enter 15 numbers:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 -15
ERROR
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
GOOD


enter 15 numbers:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 -15
ERROR
1 2 3 4 5 6 7 8 9 10 11 12 13 14 1
NOT GOOD
*/