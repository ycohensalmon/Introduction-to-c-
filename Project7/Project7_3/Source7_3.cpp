/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 7 question 3
the project gets a matrix with 100 numbers and divides it into two triangles
after he has turned it into a triangle in a one-dimensional array and also sorted it,
now he returns it back to the matrix and print the sorted matrix
*/
#include <iostream>
using namespace std;

void Triangle_Right(int arr[][10], int trg_right[], int size)
{
    int index = 0;

    for (int i = 0, step = 1; i < size-1; i++, step++) // make a triengle for the rigth side
        for (int j = step; j < size; j++, index++)
            trg_right[index] = arr[i][j];
}
void Triangle_left(int arr[][10], int trg_left[], int size)
{
   int index = 0;

    for (int i = 1, step = 1; i < size; i++, step++) // make a triengle for the left side
        for (int j = 0; j < step; j++,index++)
            trg_left[index] = arr[i][j];
}
void sorted(int Triangle[], int size)
{
    int index;
    for (int first = 1; first < size; first++)  // the fonction shorted the array
    {
        int temp = Triangle[first];
        for (index = first; index > 0 && temp < Triangle[index - 1]; index--)
            Triangle[index] = Triangle[index - 1];
        Triangle[index] = temp;
    }
}

int main()
{
    int const size = 10;
    int arr[size][size];
    int const size_trg = 45;
    int trg_Right[size_trg];
    int trg_left[size_trg];
    
    cout << "enter the values:" << endl;

    for (int i = 0; i < size; i++)   // the input of the matrix
        for (int j = 0; j < size; j++)
            cin >> arr[i][j];

    cout << endl << endl;
    cout << "before sorted:" << endl;

    for (int i = 0; i < size; i++)  // the output in matrix
    {
        for (int j = 0; j < size; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "sorted matrix:" << endl;

    Triangle_Right(arr, trg_Right, size); // make a triengle for the rigth side
    sorted(trg_Right, size_trg);        // sorted the array

    int index1 = 0;  

    for (int i = 0, step = 1; i < 9; i++, step++)  // he returns it back to the matrix
        for (int j = step; j < 10; j++, index1++)
            arr[i][j] = trg_Right[index1];

    Triangle_left(arr, trg_left, size);  // make a triengle for the left side
    sorted(trg_left, size_trg);        // sorted the array

    int index2 = 0;
    for (int i = 1, step = 1; i < 10; i++, step++)  // he returns it back to the matrix
        for (int j = 0; j < step; j++, index2++)
            arr[i][j] = trg_left[index2];

    for (int i = 0; i < size; i++)  // print the sorted matrix
    {
        for (int j = 0; j < size; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }
    return 0;
}
/*
enter the values:
1 11 21 31 41 51 61 71 81 91 2 12 22 32 42 52 62 72 82 92 3 13 23 33 43 53 63 73 83 93 4 14 24 34 44 54 64 74 84 94 5 15 25 35 45 55 65 75 85 95 6 16 26 36 46 56 66 76 86 96 7 17 27 37 47 57 67 77 87 97 8 18 28 38 48 58 68 78 88 98 9 19 29 39 49 59 69 79 89 99 10 20 30 40 50 60 70 80 90 100


before sorted:
1 11 21 31 41 51 61 71 81 91
2 12 22 32 42 52 62 72 82 92
3 13 23 33 43 53 63 73 83 93
4 14 24 34 44 54 64 74 84 94
5 15 25 35 45 55 65 75 85 95
6 16 26 36 46 56 66 76 86 96
7 17 27 37 47 57 67 77 87 97
8 18 28 38 48 58 68 78 88 98
9 19 29 39 49 59 69 79 89 99
10 20 30 40 50 60 70 80 90 100
sorted matrix:
1 11 21 22 31 32 33 41 42 43
2 12 44 51 52 53 54 55 61 62
3 4 23 63 64 65 66 71 72 73
5 6 7 34 74 75 76 77 81 82
8 9 10 13 45 83 84 85 86 87
14 15 16 17 18 56 88 91 92 93
19 20 24 25 26 27 67 94 95 96
28 29 30 35 36 37 38 78 97 98
39 40 46 47 48 49 50 57 89 99
58 59 60 68 69 70 79 80 90 100
*/