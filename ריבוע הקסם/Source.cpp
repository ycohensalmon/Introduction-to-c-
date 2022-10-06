#include <iostream>
using namespace std;

void magic_sq(int x[15][15], int size);

int main()
{
	int const size = 15;
	int ma[size][size]{ 0 };
	
	magic_sq(ma,size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (ma[i][j]/10 == 0)
			{
				cout << ma[i][j] << "   | ";
			}
			else if (ma[i][j] / 100 == 0)
			{
				cout << ma[i][j] << "  | ";
			}
			else
			{
				cout << ma[i][j] << " | ";
			}
			
		}
		cout << endl;
	}
	return 0;
}

void magic_sq(int x[15][15], int size)
{
	x[0][size / 2] = 1;
	int row, colone;
	int i = 0, j = size / 2;
	for (int c = 2; c <= size * size; c++)// c egal a 2 prcq le 1 c celui du milieu
	{
		row = (i - 1 < 0) ? size - 1 : i - 1;//ci ya de la place dans le prochain
		colone = (j - 1 < 0) ? size - 1 : j - 1;
		if (x[row][colone])//ci il et pas egal a 0 alor is et pas pri
		{
			i = ++i % size;//ci ya pas de place en haut a gauche 
		}
		else
		{
			i = row;
			j = colone;
		}
		x[i][j] = c;
	}
}