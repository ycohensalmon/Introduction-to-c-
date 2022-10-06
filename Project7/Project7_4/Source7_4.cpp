/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 7 question 4
the project gets 10 words that each has 5 letters and the project arranges them in the order in the dictionary
*/
#include<iostream>
using namespace std;

bool if_true(char* small_mtrx, char* big_mtrx, int k) //Returns me true when it's sorted 
{
	for (int i = 0; i < k; i++)
	{
		if (*(small_mtrx + i) > *(big_mtrx + i))
			return true;
		else if(*(small_mtrx + i) < *(big_mtrx + i))
			return false;
	}
	return true;
}
void bubbleSort(char words[10][5], int size_w, int size_l)//The function does sort bubbles in the order of the dictionary
{
	int tmp;
	for (int i = size_w -1 ; i > 0 ; i--)
		for (int j = 0 ; j < i ; j++)
			if (if_true(&words[j][0], &words[j + 1][0], size_l))
				for (int k = 0; k < size_l; k++)
				{
					tmp = words[j][k];
					words[j][k] = words[j + 1][k];
					words[j + 1][k] = tmp;
				}
}

int main() 
{
	int const s_letter = 5;
	int const s_words = 10;
	char matrix[s_words][s_letter] = {};

	cout << "enter 10 words:" << endl;

	for (int i = 0; i < s_words; i++) // the input in the matrix
		for (int j = 0; j < s_letter; j++)
			cin >> matrix[i][j];

	bubbleSort(matrix, s_words, s_letter);// call of fonction to bubble sort

	cout << "after sorting:" << endl;

	for (int i = 0; i < s_words; i++) // the outpout sorted
	{
		for (int j = 0; j < s_letter; j++)
			cout << matrix[i][j];
		cout << " ";
	}

	return 0;
}
/*
enter 10 words:
salut
toute
monde
comnt
jpeut
faire
poure
arive
cchez
moiii
after sorting:
arive cchez comnt faire jpeut moiii monde poure salut toute
*/