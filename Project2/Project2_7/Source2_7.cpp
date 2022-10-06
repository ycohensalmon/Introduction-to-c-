/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 2 question 7
my project give me the sum of the number that i enter
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "enter a three digit number:" << endl;
	int number, sum;
	cin >> number;
	sum = (number % 10);
	number = number / 10;
	sum = sum + (number % 10);
	number = number / 10;
	sum = sum + (number % 10);
	cout << "the sum is: " << sum << endl;
	/*
	enter a three digit number:
	715
	the sum is: 13
	*/
}