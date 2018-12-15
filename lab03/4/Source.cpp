#include <iostream>
#include <fstream>
#include <list>

using namespace std;

void main()
{
	int *sw = new int;
	int x, y;

	cout << "Zadannoe chislo = ";
	cin >> x;
	cout << "Vstavit chislo = ";
	cin >> y;

	ifstream in("input.txt");
	if (!in.is_open())
		cout << "Error! File is not found!" << endl;
	ofstream out("output.txt");

	list<int> List;
	while (in >> *sw)
	{
		List.push_back(*sw);
	}
	for (list<int>::iterator i = List.begin(); i != List.end(); ++i)
		if (*i == x)
			List.insert(i, y);

	for (list<int>::iterator i = List.begin(); i != List.end(); ++i)
	{
		out << *i << " ";
	}

	in.close();
	out.close();
	delete sw;
}