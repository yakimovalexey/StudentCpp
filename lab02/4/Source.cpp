#include <iostream>
#include <conio.h>

using namespace std;

int a;
void check(bool& sign, bool& parity, int& mod5, bool& greater10);

int main()
{
	bool sign, parity, greater10;
	int mod5;
	cout << "Enter the number: "; cin >> a;
	check(sign, parity, mod5, greater10);
	if (sign)
		cout << "Is the number positive? Yes" << endl;
	else
		cout << "Is the number positive? No" << endl;
	if (parity)
		cout << "Is the number even? No" << endl;
	else
		cout << "Is the number even? Yes" << endl;
	cout << "The remainder of the division by 5 = " << mod5 << endl;
	if (greater10)
		cout << "Is the number greater than 10? Yes" << endl;
	else
		cout << "Is the number greater than 10? No" << endl;
	_getch();
}

void check(bool& sign, bool& parity, int& mod5, bool& greater10)
{
	sign = a > 0;
	parity = a % 2;
	mod5 = a % 5;
	greater10 = a > 10;
}