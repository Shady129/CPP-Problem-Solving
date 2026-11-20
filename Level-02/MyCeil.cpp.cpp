/*
Problem: MyCeil

Write a C++ program that:

1. Asks the user to enter a floating-point number.
2. Creates a function called GetFractionPart
   to extract the fractional part of the number.
3. Creates a function called MyCeil
   to calculate the ceiling value of the number.
4. Returns the smallest integer greater than
   or equal to the given number.
5. Prints the result using MyCeil.
6. Prints the result using the built-in ceil()
   function for comparison.
*/





#include <iostream>


using namespace std;



float ReadNumber()
{
	float Number;
	cout << "Please enter a number? ";
	cin >> Number;


	return Number;
}




float GenerateFraction(float Number)
{

	return Number - int(Number);
}




int  MyCeil(float Number)
{
	if (abs(GenerateFraction(Number)) > 0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	else
	
		return int(Number);
}





int main()
{
	float Number = ReadNumber();

	cout << "My MyCeil Result : " << MyCeil(Number) << endl;

	cout << "C++ ceil Result : " << ceil(Number) << endl;

	return 0;
}