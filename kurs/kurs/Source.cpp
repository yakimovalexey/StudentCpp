#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int OPEN_VAL = 0;
const int CLOSE_VAL = 1;
const int START_VAL = -1;

class Cell
{
	int i_;
	int j_;
public:
	Cell(int i, int j) : i_(i), j_(j) {}
	Cell() {}

	bool operator==(const Cell& c)
	{
		return i_ == c.i_ && j_ == c.j_;
	}

	bool operator!=(Cell c)
	{
		return !(*this == c);
	}

	int Get_i() { return this->i_; }
	int Get_j() { return this->j_; }
};
ostream& operator<<(ostream& os, Cell&  cell)
{
	os << "(" << cell.Get_i() << ", " << cell.Get_j() << ")";
	return os;
}

class Path_Node
{
	Cell prev_cell;
	Cell cur_cell;
public:
	Path_Node(Cell  prev_cell, Cell  cur_cell) : prev_cell(prev_cell), cur_cell(cur_cell) {}
	Path_Node() {}

	Cell Get_prev_cell() { return this->prev_cell; }
	Cell Get_cur_cell() { return this->cur_cell; }
};
ostream& operator<<(ostream& os, Path_Node&  path_node)
{
	os << "(" << path_node.Get_prev_cell() << ", " << path_node.Get_cur_cell() << ")";
	return os;
}

template <class T>
class Stack
{
	T * arr;
	int size;
public:
	Stack(int size = 0)
	{
		this->arr = new T[size];
		this->size = size;
	}

	int get_size()
	{
		return this->size;
	}

	void set_size(int size)
	{
		this->size = size;
	}

	void pop()
	{
		T * arr2 = new T[this->get_size() - 1];
		for (int i = 0; i < this->get_size() - 1; i++)
			arr2[i] = this->arr[i];
		delete[] this->arr;
		this->arr = new T;
		this->arr = arr2;
		this->set_size(this->size - 1);
	}

	T top()
	{
		return this->arr[this->get_size() - 1];
	}

	void push(Path_Node value)
	{
		T * arr2 = new T[this->get_size() + 1];
		for (int i = 0; i < this->get_size(); i++)
			arr2[i] = this->arr[i];
		this->set_size(this->size + 1);
		arr2[this->get_size() - 1] = value;
		delete[] this->arr;
		this->arr = new T;
		this->arr = arr2;
	}
};

class Labirint
{
	int** arr;
	int lines;
	int columns;
public:
	Labirint(int lines = 0, int columns = 0)
	{
		this->arr = new int*[lines];
		for (int i = 0; i < lines; i++)
			this->arr[i] = new int[columns];
	}

	void set_lines(int lines)
	{
		this->lines = lines;
		this->arr = new int*[lines];
	}

	void set_columns(int columns)
	{
		this->columns = columns;
		for (int i = 0; i < lines; i++)
			this->arr[i] = new int[columns];
	}

	int get_lines() { return this->lines; }
	int get_columns() { return this->columns; }
	void set_value(int i, int j, int value) { this->arr[i][j] = value; }
	int get_value(int i, int j) { return this->arr[i][j]; }
};

void new_file(Labirint &labirint);
void read_file(Labirint &labirint);
bool fill_stack(Stack<Path_Node>& path_stack, Labirint &labirint);
void print_path(Stack<Path_Node> stack);
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int main()
{
	locale::global(locale("rus"));
	Stack<Path_Node> path_stack;
	Labirint labirint;
	read_file(labirint);

	if (!fill_stack(path_stack, labirint))
	{
		cout << "Нет выхода!" << endl;
	}
	else
	{
		print_path(path_stack);
	}
	system("Pause");
}

void read_file(Labirint &labirint)
{
	ifstream in("save.txt");
	if (!in.is_open())
		new_file(labirint);
	else
	{
		int count = 0;
		int temp;

		while (!in.eof())
		{
			in >> temp;
			count++;
		}

		in.seekg(0, ios::beg);
		in.clear();

		int start[2];
		in >> start[0];
		in >> start[1];

		int count_space = 0;
		char symbol;
		string str;
		getline(in, str);
		while (!in.eof())
		{
			in.get(symbol);
			if (symbol == ' ') count_space++;
			if (symbol == '\n') break;
		}

		in.seekg(0, ios::beg);
		getline(in, str);
		in.clear();

		labirint.set_lines(count / (count_space + 1));
		labirint.set_columns(count_space + 1);

		int value;
		for (int i = 0; i < labirint.get_lines(); i++)
			for (int j = 0; j < labirint.get_columns(); j++)
			{
				in >> value;
				labirint.set_value(i, j, value);
			}
		labirint.set_value(start[0], start[1], START_VAL);

		in.close();
	}
}

void new_file(Labirint &labirint)
{
	ofstream out("save.txt");
	int lines, columns;
	cout << "Файл не найден! Создаем новый массив:" << endl;
	cout << "Кол-во строк = "; cin >> lines;
	cout << "Кол-во столбцов = "; cin >> columns;
	labirint.set_lines(lines);
	labirint.set_columns(columns);
	int value;
	for (int i = 0; i < labirint.get_lines(); i++)
		for (int j = 0; j < labirint.get_columns(); j++)
		{
			cin >> value;
			labirint.set_value(i, j, value);
		}

	int start[2];
	cout << "Координаты входа в лабиринт: ";
	cin >> start[0]; out << start[0] << ' ';
	cin >> start[1]; out << start[1] << endl;

	for (int i = 0; i < labirint.get_lines(); i++)
	{
		for (int j = 0; j < labirint.get_columns(); j++)
		{
			out << labirint.get_value(i, j);
			if (j < labirint.get_columns() - 1) out << ' ';
		}
		if (i < labirint.get_lines() - 1) out << endl;
	}
	labirint.set_value(start[0], start[1], START_VAL);

	out.close();
}

bool fill_stack(Stack<Path_Node>& path_stack, Labirint &labirint)
{
	for (int cur_cell_val = START_VAL; ; --cur_cell_val)
	{
		int  start_stack_size = path_stack.get_size();
		for (int i = 0; i < labirint.get_lines(); ++i)
		{
			for (int j = 0; j < labirint.get_columns(); ++j)
			{
				if (labirint.get_value(i, j) == cur_cell_val)
				{
					for (int  i_sosed = max(i - 1, 0);
						i_sosed <= min(i + 1, labirint.get_lines() - 1); ++i_sosed)
					{
						for (int j_sosed = max(j - 1, 0); j_sosed <= min(j + 1, labirint.get_columns() - 1); ++j_sosed)
						{
							if ((i_sosed == i || j_sosed == j) && labirint.get_value(i_sosed, j_sosed) == OPEN_VAL)
							{
								labirint.set_value(i_sosed, j_sosed, cur_cell_val - 1);
								path_stack.push(Path_Node(Cell(i, j), Cell(i_sosed, j_sosed)));
								if (i_sosed == 0 || i_sosed == labirint.get_lines() - 1 || j_sosed == 0 || j_sosed == labirint.get_columns() - 1)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		if (path_stack.get_size() == start_stack_size) return false;
	}
}

void print_path(Stack<Path_Node> stack)
{
	int step = 1;
	cout << "Маршрут в лабиринте от выхода до стартовой клетки:" << endl;
	for (;;)
	{
		Cell prev_cell = stack.top().Get_prev_cell();
		cout << "Шаг " << step << ": " << stack.top().Get_cur_cell() << " -> " << stack.top().Get_prev_cell() << endl;
		if (stack.get_size() == 1)
		{
			return;
		}
		while (stack.top().Get_cur_cell() != prev_cell)
		{
			stack.pop();
		}
		step++;
	}
}