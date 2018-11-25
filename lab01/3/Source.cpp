#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int y = 51, i = 0, x;
	cout << "Hi. Try to quess a number." << endl;
	do
	{
		i++;
		cout << i << " try: "; cin >> x;
		if (x > y)
			cout << "Answer: No. Less" << endl;
		else if (x < y)
			cout << "Answer: No. Greater" << endl;
		else
			cout << "Answer: YES";
	} while (y != x);
	_getch();
}
