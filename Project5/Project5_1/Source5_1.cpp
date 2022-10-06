/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 5 question 1
The project calculates 2 functions 
1. Area of a rectangle 2. Radius of a circle
*/
#include <iostream>
using namespace std;

int area(int a, int b);
float area(float radius);

int main()
{
	cout << "enter length and width of the rectangle:" << endl;
	int length, width;
	cin >> length >> width;

	while (width <= 0 || length <= 0)// if the number he is negative
	{
		cout << "ERROR" << endl;
		cin >> length >> width;
	}
	cout << area(length, width) << endl;
	
	cout << "enter radius of the circle:" << endl;
	float radius;
	cin >> radius;

	while (radius <=0)// if the number he is negative
	{
		cout << "ERROR" << endl;
		cin >> radius;
	}
	cout << area(radius) << endl;
	return 0;
}

int area(int a, int b)//the fitst fonction
{
	int result;
	result = a * b;
	return result;
}

float area(float radius)//the seconde fonction
{
	const float PI = 3.14159;
	radius = radius*radius * PI;
	return radius;
}

/*
enter length and width of the rectangle:
5 -9
ERROR
5 4
20
enter radius of the circle:
5
78.5397
*/