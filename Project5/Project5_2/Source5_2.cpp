/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 5 question 2
the project calcul if the number he is percfet and prints the smaller perfect numbers from it
and finally prints the integers smaller than 500
*/
#include <iostream>
using namespace std;

bool perfect(int number)
{
	while (number<=0)//if the number is negative
	{
		cout << "ERROR" << endl;
		cin >> number;
	}

	bool flag=false;
	int sum = 0;
	for (int i = 1; i < number; i++)//if the number is perfect
	{
		if (number % i == 0)
			sum = sum + i;
	}
	if (sum == number)//the conclusion
		return true;
	return false;
}
int printPerfects(int num = 500)//defualt of 500
{
	int sum1 = 0;
	for (int i = 1; i < num; i++)
	{
		if (perfect(i))//call of fonction
		{ 
			cout << i << " ";
			sum1++;
		}
	}
	if (sum1==0)//if there arn't a perfect number
	{
		cout << "   ";
	}
	return num;
}
int main()
{
	cout << "enter a number:" << endl;
	int number;
	cin >> number;

	printPerfects(number);
		cout << endl;
	printPerfects();

	return 0;
}

/*
enter a number:
50000
6 28 496 8128
6 28 496
*/