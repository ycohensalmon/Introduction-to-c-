/*
Yossef Cohen-Salmon
ID 317805588
computer science introduction 150005.2.5781
exercise 7 question 1
The project receives an array that is in ascending order and also that there are no negative numbers
and then tells me to enter a number and tells me which index in the array this number is in
*/
#include <iostream>
using namespace std;

void binarSearch(int arr[], int size, int number)
{
    int middel, low = 0;
    int high = size - 1;
    int result = -1;

    while (low <= high)
    {
        middel = (low + high) / 2;  // Checks equality in the middle of the array
        if (number == arr[middel]) 
        {
            result = middel;
            cout << "the number  " << number << " was found at index " << result << endl;
            break;
        }
        else
            if (number > arr[middel]) 
                low = middel + 1;      // If the number is greater than the middle
            else
                high = middel - 1;    // If the number is smaller than the middle
    }

    if (result == -1)   // When no number is found
    {
        cout << "not found" << endl;
    }
}

void condition_for_array(int arr[])
{
    bool flag = true;
    do
    {
        flag = true;

        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];  //the input of the array

            if (arr[i - 1] >= arr[i] && i > 0) // Check if the array is sorted in ascending order
                flag = false;

            if (arr[i] < 0)  // Check if there are negative numbers in the array
                flag = false;
        }
        if (flag == false) // If one of the previous conditions is incorrect
            cout << "ERROR" << endl;

    } while (flag == false); // As long as one of the conditions is not met
}

int main()
{
    int const size = 10;
    int arr[size];
    int number;

    cout << "enter 10 numbers " << endl;

    condition_for_array(arr);

    cout << "enter 1 number:" << endl;
    cin >> number;
    binarSearch(arr, size, number);
    return 0;
}
/*
enter 10 numbers
1 3 4 5 6 7 8 9 9 9
ERROR
1 3 4 5 6 7 8 9 10 -5
ERROR
1 2 3 4 5 6 7 8 9 10
enter 1 number:
5
the number  5 was found at index:4
*/