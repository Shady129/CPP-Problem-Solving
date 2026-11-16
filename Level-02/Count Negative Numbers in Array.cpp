/*
Problem: Count Negative Numbers in Array

Write a C++ program that:

1. Asks the user to enter the number of array elements.
2. Fills the array with random numbers from -100 to 100.
3. Prints all array elements.
4. Counts how many negative numbers are in the array.
5. Prints the total count of negative numbers.
*/






#include <iostream>
using namespace std;



int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;


	return randNumber;
}




void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(-100, 100);
}






void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}





int NegativeCount(int arr[100], int arrLength)
{
    int Counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < 0)
        {
            Counter++;
        }
    }

    return Counter;
}




int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nNegative Numbers count is: ";
    cout << NegativeCount(arr, arrLength) << endl;

    return 0;
}

