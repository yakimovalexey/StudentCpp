#include <iostream>
#include <fstream>
#include <set>

using namespace std;

void main()
{
	int *sw = new int;

	ifstream in("input.txt");
	if (!in.is_open())
		cout << "Error! File is not found!" << endl;
	ofstream out("output.txt");

	set<int> MySet;
	while (in >> *sw)
	{
		MySet.insert(*sw);
	}
	for (auto &item : MySet)
		out << item << ' ';

	in.close();
	out.close();
	delete sw;
}