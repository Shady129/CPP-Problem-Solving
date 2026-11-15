/*
Problem 001 — Palindrome Array

Write a C++ program to check whether an array
is a Palindrome.

A Palindrome Array is an array that reads
the same forward and backward.

Requirements:
1. Fill an array with predefined numbers.
2. Print the array elements.
3. Check whether the array is a Palindrome.
4. Print the result.

Example:

Input:
10 20 30 30 20 10

Output:
Yes array is Palindrome
*/


#include <iostream> 

using namespace std;




void FillArray(int arr[100], int& arrLength)
{
    arrLength = 6;


    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;

}
void PrintArray(int arr[100], int arrLentgh)
{

    for (int i = 0; i < arrLentgh; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}


bool IsPalindromeArray(int arr[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        if (arr[i] != arr[Length - i - 1])
        {
            return false;
        }
    }
    return true;
}




int main()
{


    int arr[100];
    int Length;
    FillArray(arr, Length);
   

    
    cout << "\nArray Elements:\n";
    PrintArray(arr, Length);


    if (IsPalindromeArray(arr, Length))
        cout << "\nYes array is Palindrome\n";
    else
        cout << "\nNO array is NOT Palindrome\n";


}











