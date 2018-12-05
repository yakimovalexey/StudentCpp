#include <iostream>
#include <conio.h>

using namespace std;

int calculation(int a);

int main()
{
	int a, f1, f2, f3, f4, f5;
	cout << "Enter 5 numbers:" << endl;
	cout << "a1 = "; cin >> a;
	f1 = calculation(a);
	cout << "a2 = "; cin >> a;
	f2 = calculation(a);
	cout << "a3 = "; cin >> a;
	f3 = calculation(a);
	cout << "a4 = "; cin >> a;
	f4 = calculation(a);
	cout << "a5 = "; cin >> a;
	f5 = calculation(a);
	cout << f1 * f3 - f2 / f4 + f4 * (f5 - f1) - f2;
	_getch();
}

int calculation(int a)
{
	return a*a;
}