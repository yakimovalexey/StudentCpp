#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char name;
	int year, month, day, age;
	cout << "Your name: "; cin >> name;
	cout << "Day of birthday: "; cin >> day;
	cout << "Month of birthday: "; cin >> month;
	cout << "Year of birthday: "; cin >> year;
	cout << "Hello, " << name << ". You're " << age << " years old.";
	_getch();
}
