/*
Problem: MyFloor

Write a C++ program that:

1. Asks the user to enter a floating-point number.
2. Creates a function called MyFloor to calculate
   the floor value of the number.
3. Returns the greatest integer less than or
   equal to the given number.
4. Prints the result using MyFloor.
5. Prints the result using the built-in floor()
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




int MyFloor(float Number)
{

	if (Number > 0 || Number == int(Number))
	
		return int(Number);
	
	else
	
		return int(Number - 1);

}





int main()
{

	float Number = ReadNumber();

	MyFloor(Number);

	cout << "My MyFloor Result : " << MyFloor(Number) << endl;

	cout << "C++ floor Result  : " << floor(Number) << endl;


	return 0;

}
