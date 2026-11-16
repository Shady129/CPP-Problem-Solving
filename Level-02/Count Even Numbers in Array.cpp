
/*
Problem: Count Even Numbers in Array

Write a C++ program that:

1. Asks the user to enter the number of array elements.
2. Fills the array with random numbers from 1 to 100.
3. Prints all array elements.
4. Counts how many even numbers are in the array.
5. Prints the total count of even numbers.
*/



#include <iostream>
using namespace std;




int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}




void FillArray(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	
	}
}





void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}




int EvenCount(int arr[100], int arrLength)
{
	int Counter = 0;


	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 == 0)
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

	FillArray(arr, arrLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	cout << "\nEven Numbers count is: ";
	cout << EvenCount(arr, arrLength) << endl;

	return 0;

}
