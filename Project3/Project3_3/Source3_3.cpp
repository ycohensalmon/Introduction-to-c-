/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 3 question 3
the project recieve 2 numbers and he make an aritmetic oparations that i tell him
*/
#include <iostream>
using namespace std;
int main()
{
	double num1, num2;
	char operateur;
	float division;
	cout << "enter 2 numbers:\n";
	cin >> num1 >> num2;
	cout << "enter an operator:\n";
	cin >> operateur;

	switch (operateur) {

	case '-':
		cout << num1 << "-" << num2 << "=" << num1 - num2;
		break;

	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2;
		break;

	case '/':
         division = (double)(num1 / num2);
		cout << num1 << "/" << num2 << "=" << division;
		break;

	case '*':
		cout << num1 << "*" << num2 << "=" << num1 * num2;
		break;
	default:
		cout << "ERROR" << endl;		
	}
	return 0;

/*
enter 2 numbers:
7
2
enter an operator:
+
7+2=9



enter 2 numbers:
7
2
enter an operator:
-
7-2=5



enter 2 numbers:
7
2
enter an operator:
*
7*2=14


enter 2 numbers:
7
2
enter an operator:
/
7/2=3.5


enter 2 numbers:
7
2
enter an operator:
5
ERROR
*/
}