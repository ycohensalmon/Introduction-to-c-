/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 5 question 4
the project calcul if the number id is prime, if yes he print the number
if no he print the next prime number after the originel number
if the number is negative the project find a random number and print the next number prime
*/
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

bool isPrime(int num);
int findPrime(int number);
int main()
{
	int number, random;
	cout << "enter number of values:" << endl;
	cin >> number;
	if (number<=0)//if the number is negative
	{
		srand((unsigned)time(NULL));//find a random number
		random = 10 + rand() % 91;
		cout << "table size: " << findPrime(random);
	}
	else//if the number is positive
		cout << "table size: " << findPrime(number);

	return 0;
}

bool isPrime(int num)
{
	bool flag=true;
	int count = 0;
	for (int i = 1; i <= num; i++)//Formula for finding a prime number
	{
		if (num % i == 0)
		{
			count++;
		}
	}
	if (count == 2)
		flag = true;
	else
		flag = false;
	return flag;
}
int findPrime(int number)
{
	while (isPrime(number)==false)//if the number is not prime 
	{
		number++;
	}
	return number;
}
