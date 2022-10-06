/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 2 question 8
my project calcule the time of the flight duration
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "enter flight takeoff:" << endl;
	int hours1, minutes1, secondes1;
	cin >> hours1;
	cin >> minutes1;
	cin >> secondes1;
	cout << "enter flight duration:" << endl;
	int hours2, minutes2, secondes2, sumH, sumM, sumS;
	cin >> hours2;
	cin >> minutes2;
	cin >> secondes2;

	if ((secondes2 + secondes1) < 60) {
		sumS = secondes2 + secondes1;
	}
	else {
		sumS = ((secondes2 + secondes1) % 60);
		++minutes1;
	}

	if ((minutes2 + minutes1) < 60) {
		sumM = minutes2 + minutes1;
	}
	else {
		sumM = ((minutes2 + minutes1) % 60);
		++hours1;
	}
	if (hours2 + hours1 < 24) {
		sumH = hours2 + hours1;
	}
	else {
		sumH = ((hours2 + hours1) % 24);
	}
	cout << "flight arrival is:" << endl;
	cout << sumH << ":" << sumM << ":" << sumS;
	/*
enter flight takeoff:
21
45
33
enter flight duration:
0
55
10
flight arrival is:
22:40:43
	*/
}