#include <iostream>

using namespace std;

int main()
{
	int a, b, s, x;
	char y;
	cout << "Hello, my dear. What are the numbers?" << endl;
	cout << "Number 1: "; cin >> a;
	cout << "Number 2: "; cin >> b; cout << endl;
	cout << "What do you want to do?" << endl;
	cout << "1. +" << endl;
	cout << "2. -" << endl;
	cout << "3. *" << endl;
	cout << "4. /" << endl;
	cout << "Your answer: "; cin >> x;
	switch (x) {
	case 1:
		s = a + b;
		break;
	case 2:
		s = a - b;
		break;
	case 3:
		s = a * b;
		break;
	case 4:
		s = a / b;
		break;
	default:
		cout << "Wrong answer." << endl;
		break;
	}
	cout << "Result = " << s << endl << endl;
	cout << "Do you want to try again? y/n" << endl; cin >> y; cout << endl;
	switch (y) {
	case 'y':
		main();
		break;
	case 'n':
		return 0;
		break;
	default:
		cout << "Wrong answer." << endl;
		break;
	}
}