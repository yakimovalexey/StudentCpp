#include <iostream>
#include <fstream>
#include <list>

using namespace std;

void main()
{
	int *sw = new int;
	int x;
	bool check = false;

	cout << "Chislo = ";
	cin >> x;

	ifstream in("input.txt");
	if (!in.is_open())
		cout << "Error! File is not found!" << endl;
	ofstream out("output.txt");

	list<int> List;
	while (in >> *sw)
	{
		List.push_back(*sw);
	}
	for (int i : List)
		if (x == i)
			check = true;

	if (check)
		out << "EST";
	else
		out << "NETU";

	in.close();
	out.close();
	delete sw;
}