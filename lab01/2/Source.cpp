#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	time_t          seconds = time(NULL);
	tm*             timeinfo = localtime(&seconds);
	char name[100];
	int year, month, day, age;
	cout << "Your name: "; cin >> name;
	cout << "Day of birthday: "; cin >> day;
	cout << "Month of birthday: "; cin >> month;
	cout << "Year of birthday: "; cin >> year;
	age = timeinfo->tm_year + 1900 - 1 - year;
	if ((timeinfo->tm_mon + 1) > month)
		age++;
	else if (((timeinfo->tm_mon + 1) == month) && (timeinfo->tm_mday >= day))
		age++;
	cout << "Hello, " << name << ". You're " << age << " years old.";
	_getch();
}
