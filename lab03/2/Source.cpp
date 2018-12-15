#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	int *sw = new int;
	int sum = 0, k = 0;

	ifstream in("input.txt");
	if (!in.is_open())
		cout << "Error! File is not found!" << endl;
	ofstream out("output.txt");

	while (in >> *sw)
	{
		sum = sum + *sw;
		k++;
	}

	out << (double) sum / k;

	in.close();
	out.close();
	delete sw;
}