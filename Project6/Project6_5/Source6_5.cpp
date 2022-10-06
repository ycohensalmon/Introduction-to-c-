/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 6 question 5
The project checks in two sets, how many numbers are in the second set that are in the first set
*/
#include <iostream>
using namespace std;

void the_difference(int set1[], int set2[], int size, int difference[]);
int main()
{
    int const size = 6;
    int set1[size], set2[size];
    int difference[size];
  
    cout << "enter first 6 numbers:" << endl; //the first array
    for (int i = 0; i < 6; i++)
    {
        cin >> set1[i];
    }

    cout << "enter next 6 numbers:" << endl; //the second array
    for (int i = 0; i < 6; i++)
    {
        cin >> set2[i];
    }

    cout << "set difference is:" << endl;
    the_difference(set1, set2, size, difference);
    return 0;
}
void the_difference(int set1[], int set2[], int size, int difference[])
{
    int dif = 0, counteur = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0, k = 0; j < size; j++, k++)
        {
            if (set1[i] != set2[j]) // chack if there a number in set1 that is in the set2
                dif += 1;

            if (dif == size) //if the number in set1 not existe in set2 , so he print the number from set1
            {
                difference[k] = set1[i];
                cout << difference[k] << " ";
            }
        }
        counteur += dif; //if there arnt a number to set1 in set 2
        dif = 0;
    }
    if (counteur == size * 5) //When it is equal to 30 it means that all the numbers in the second array are also in the first so print "empty"
    {
        cout << "empty" << endl;
    }
}
