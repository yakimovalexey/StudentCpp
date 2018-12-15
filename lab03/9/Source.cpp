#include <iostream>
#include <fstream>
#include <list>

using namespace std;

void main()
{
	int *sw = new int;

	ifstream in("input.txt");
	if (!in.is_open())
		cout << "Error! File is not found!" << endl;
	ofstream out_odd("odd.txt");
	ofstream out_even("even.txt");

	list<int> List;
	while (in >> *sw)
	{
		List.push_back(*sw);
	}
	for (list<int>::iterator i = List.begin(); i != List.end(); ++i)
		if (*i % 2 == 0)
			out_even << *i << " ";
		else
			out_odd << *i << " ";

	in.close();
	out_odd.close();
	out_even.close();
	delete sw;
}