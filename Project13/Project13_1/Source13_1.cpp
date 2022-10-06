/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 13 question 1
The project recieve 2 files and calculates the average of all the numbers in the file it receives
and tell me which file have the biggest avarege 
*/
#include <iostream>
#include <fstream>
using namespace std;

int avg(ifstream& text) 
{/***********explenation of the fonction*************/
//The function calculates the average of all the numbers in the file it receives

	int num;
	int sum = 0, conteur = 0;
	while (text >> num) // As long as the file is not empty
	{
		conteur++;   // Promote the 'conteur' in 1
		sum += num; // Sum up all the numbers
	}
	if (!conteur) // when the conteur is 0
		return 0;

	return sum / conteur; // return the avarege
}

int main()
{
	ifstream text1;
	ifstream text2;
	text1.open("grade1.txt");  //open the first file
	text2.open("grade2.txt"); // open the seconde file
	if (!text1 || !text2) //when the file not opening
	{
		cerr << "Error opening the file";
		return 0;
	}
	int avarage1 = avg(text1);  //creat the first avarege
	int avarage2 = avg(text2); //creat the seconde avarege

	if (avarage1 > avarage2)  
		cout << "highest average found in file 1";       // when the first avarege is the higest
	else
		if (avarage1 < avarage2) 
			cout << "highest average found in file 2"; // when the seconde avarege is the higest
		else 
			cout << "equal";                         // when they equal (Did not ask for it in question but I added)
		
	text1.close();
	text2.close();
	return 0;
}