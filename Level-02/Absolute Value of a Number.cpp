/*
Absolute Value of a Number

Write a C++ program that:

1. Asks the user to enter a floating-point number.
2. Creates a function called MyABS to calculate
   the absolute value of the number.
3. Returns the number unchanged if it is positive or zero.
4. Converts the number to positive if it is negative.
5. Prints the result using MyABS.
6. Prints the result using the built-in abs function
   to compare both results.
*/

#include <iostream>
using namespace std;


float MyABS(float Number)
{
	if (Number > 0)
	
		return Number;
	
	else
	
		return Number * -1;
	
}


float ReadNumber()
{
	float Number;

	cout << "Please enter a number? ";
	cin >> Number;

	return Number;
}




int main()
{

	float Number = ReadNumber();


	cout << "My abs Result : " << MyABS(Number) << endl;
	cout << "C++ abs Result: " << abs(Number) << endl;

	return 0;

}















