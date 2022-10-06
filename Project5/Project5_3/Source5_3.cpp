/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 5 question 3
the project calcul the last digit of the ID's number
*/
#include <iostream>
using namespace std;

int sumDigits(int num)//sum of number
{
	int sum = 0;
	while (num > 0)
	{
		sum = sum + num % 10;
		num = num / 10;
	}
	return sum;
}
int lastDigitID(int numID)
{
	int sum = 0;
	for (int i = 1; i < 9; i++)
	{
		if (i % 2 != 0)
			sum += sumDigits((numID % 10) * 2);//for ood number
		else
			sum += sumDigits(numID % 10);//for even number
		numID /= 10;
	}
	sum= 10 - (sum % 10);//calcul the last number
	return sum;
}
int main()
{
	int ID;
	cout << "enter your ID:" << endl;
	cin >> ID;
	if (ID<10000000)//if the first number is 0
		cout << "your full ID is:" << endl << 0 << ID << lastDigitID(ID);
	else
		cout << "your full ID is:" << endl << ID << lastDigitID(ID);
	
	return 0;
}