#include <iostream>
#include <conio.h>

using namespace std;

int b;
bool isExceeded(int numToCalculateFactorial, int& stepNumber);

int main()
{
	int a, stepNumber = 0;
	cout << "Type the number to calculate factorial : "; cin >> a;
	cout << "Number to compare : "; cin >> b; cout << endl;
	if (isExceeded(a, stepNumber))
	{
		cout << "Did the factorial exceed the value ? YES" << endl;
		cout << "The step number is " << stepNumber;
	}
	else
		cout << "Did the factorial exceed the value? NO";
	_getch();
}

bool isExceeded(int numToCalculateFactorial, int& stepNumber)
{
	int fact = 1;
	for (int i = 2; i <= numToCalculateFactorial; i++)
	{
		fact = fact * i;
		if (fact > b)
		{
			stepNumber = i - 1;
			return true;
		}
	}
	return false;
}