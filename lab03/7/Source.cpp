#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

bool check(std::string str)
{
	stack<char> brackets;
	for (int i = 0; i < str.length(); i++) {
		char ch = str[i];
		switch (ch) {
		case '(':
		case '{':
		case '[':
			brackets.push(ch);
			break;
		case ')':
			if (brackets.empty() || brackets.top() != '(') {
				return false;
			}
			brackets.pop();
			break;
		case '}':
			if (brackets.empty() || brackets.top() != '{') {
				return false;
			}
			brackets.pop();
			break;
		case ']':
			if (brackets.empty() || brackets.top() != '[') {
				return false;
			}
			brackets.pop();
			break;
		}
	}
	return true;
}

int main(void) {
	ifstream in("input.txt");
	ofstream out("output.txt");

	string str;

	str.assign((istreambuf_iterator<char>(in.rdbuf())), istreambuf_iterator<char>());

	if (check(str))
		out << "TRUE.";
	else
		out << "FALSE.";

	in.close();
	out.close();
}