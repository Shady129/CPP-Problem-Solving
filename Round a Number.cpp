/*
Problem 006 / 250 — Round a Number

Write a C++ program that:

1. Asks the user to enter a floating-point number.
2. Creates a function called GetFractionPart
   to extract the fractional part of the number.
3. Creates a function called MyRound
   to round the number to the nearest integer.
4. If the absolute fractional part is 0.5 or more,
   round away from zero.
5. Otherwise, keep the integer part unchanged.
6. Prints the result using MyRound.
7. Prints the result using the built-in round function
   to compare both results.
*/



#include <iostream>
using namespace std;




float GetFractionPart(float Number)
{
	return Number - int(Number);
}




int RoundNumber(float Number)
{
	int intPart = int(Number);

	float FractionsPart = GetFractionPart(Number);

	if (abs(FractionsPart) >= 0.5)
	{
		if (Number > 0)
			return ++intPart;
		else
			return --intPart;
	}
}



float ReadNumber()
{
	float Number;

	cout << "Please enter a float number? ";
	cin >> Number;

	return Number;
}



int main()
{

	float Number = ReadNumber();

	cout << "My Round Result : " << RoundNumber(Number) << endl;

	cout << "C++ Round Result: " << round(Number) << endl;


	return 0;
}