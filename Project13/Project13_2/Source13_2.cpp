/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 13 question 2
The project receives files and creates a new file that says the number of times the numbers from 0 to 9 appear
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char name[31];
	cin >> name;
	ifstream file(name);                  //Reads a file by the name entered
	ofstream out("frequencyDigits.txt"); // creat a file

	if (!file || !out)                 //when the file not opening
	{
		cerr << "Error opening the file";
		return -1;
	}

	cout << "digit frequency\n";
	out << "digit frequency\n";

	char num, digit = '0';
	int frequency = 0;
	for (int i=0; i < 10; i++)   // Rotates 10 times
	{
		while (file >> num) 
		{
			if (num==digit)    // When there is a character in a file equal to the number
			{
				frequency++; // count the number of time
			}
		}
		cout << i << "\t" << frequency << endl;
		out << i << "\t" << frequency << endl;
		frequency = 0;                        // Resets the count
		digit++;                             //Increases the number by 1
		file.close();                       //Closes the file to start reading from the beginning next time
		file.open(name);
	}
	file.close(); //close the files
	out.close();
	return 0;
}