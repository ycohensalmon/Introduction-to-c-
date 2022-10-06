/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 3 question 6
The project gives the number of days in a month in each month I ask it
*/
#include <iostream>
using namespace std;
int main()
{
	int MONTH;
	cout << "enter a number:" << endl;
	cin >> MONTH;
	enum MONTH {JAN =31, FEB =28, MARCH =31, APRIL=30, MAY=31, JUNE=30,
		         JULY=31, AUG=31, SEPT=30, OCT=31, NOV=30, DEC=31};
	{
		switch (MONTH) {
		case 1:
			cout << JAN << " days in the month";
			break;
		case 2:
			cout << FEB << " days in the month";
			break;
		case 3:
			cout << MARCH << " days in the month";
			break;
		case 4:
			cout << APRIL << " days in the month";
			break;
		case 5:
			cout << MAY << " days in the month";
			break;
		case 6:
			cout << JUNE << " days in the month";
			break;
		case 7:
			cout << JULY << " days in the month";
			break;
		case 8:
			cout << AUG << " days in the month";
			break;
		case 9:
			cout << SEPT << " days in the month";
			break;
		case 10:
			cout << OCT << " days in the month";
			break;
		case 11:
			cout << NOV << " days in the month";
			break;
		case 12:
			cout << DEC << " days in the month";
			break;
		}
	};
	return 0;

	/*
enter a number:
5
31 days in the month
	*/
}