/*
yossef cohen salmon 317805588
computer science introduction 150005.2.5781
exercise 4 question 1
The project gives me random numbers and tells me at the end whether they are sorted or not
*/
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
bool flag;
int a, b = 0;

srand (time(NULL));
a = rand() % 100;

cout << a << " ";

for (int i = 0; i < 10; i++)
  {
	a = rand() % 100;
	cout << a << " ";

	if (a >= b)
	{
		flag = true ;
	}
  }
if (flag)
cout << "\nnot sorted list";
else
cout << "sorted list";

return 0;

/*
70 69 63 76 88 45 63 53 76 93 4
not sorted list
*/
 }