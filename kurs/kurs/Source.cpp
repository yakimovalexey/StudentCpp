#include <iostream>
#include <fstream>

using namespace std;

template <class T>
class Stack
{
	int lines;
	int columns;
	T arr;
public:
	Stack(int lines, int columns)
	{
		this->lines = lines;
		this->columns = columns;
		this->arr = new int*[lines];
		for (int i = 0; i < lines; i++)
			arr[i] = new int[columns];
	}
	Stack()
	{
		this->arr = new int*;
	}
	void SetValue(int i, int j, int value)
	{
		this->arr[i][j] = value;
	}
	void SetLines(int lintes)
	{
		this->lines = lines;
		this->arr = new int*[lines];
	}
	void SetColumns(int columns)
	{
		this->columns = columns;
		for (int i = 0; i < lines; i++)
			arr[i] = new int[columns];
	}
	int GetValue(int i, int j)
	{
		return this->arr[i][j];
	}
	int GetLines()
	{
		return this->lines;
	}
	int GetColumns()
	{
		return this->columns;
	}
};

void Read_File(Stack<int**> &labyrinth);
void New_File();
void Show_Labyrinth(Stack<int**> labyrinth);

void main()
{
	setlocale(LC_ALL, "Russian");

	Stack<int**> labyrinth;
	Read_File(labyrinth);
	int ch = 1;
	while (ch != 0)
	{
		cout << "Меню:" << endl << "1. Показать карту лабиринта" << endl << "2. Добавить строку" << endl << "3. Добавить столбец" << endl << "4. Пройти лабиринт" << endl << "0. Выход" << endl;
		cin >> ch;
		switch (ch)
		{
		case 0:
			exit(1);
		case 1:
			Show_Labyrinth(labyrinth);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			cout << "Error" << endl;
		}
	}

	system("pause");
}

void Read_File(Stack<int**> &labyrinth)
{
	ifstream in("save.txt");
	if (!in.is_open())
		New_File();
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

		int count_space = 0;
		char symbol;
		while (!in.eof())
		{
			in.get(symbol);
			if (symbol == ' ') count_space++;
			if (symbol == '\n') break;
		}

		in.seekg(0, ios::beg);
		in.clear();

		int lines = count / (count_space + 1);
		int columns = count_space + 1;
		int value;
		labyrinth.SetLines(lines);
		labyrinth.SetColumns(columns);

		for (int i = 0; i < lines; i++)
			for (int j = 0; j < columns; j++)
			{
				in >> value;
				labyrinth.SetValue(i, j, value);
			}

		in.close();
	}
}

void New_File()
{
	ofstream out("save.txt");
	cout << "Файл не найден! Создаем новый массив:" << endl;
	int lines, columns, value;
	cout << "Кол-во строк = "; cin >> lines;
	cout << "Кол-во столбцов = "; cin >> columns;
	Stack<int**> labyrinth(lines, columns);
	for (int i = 0; i < lines; i++)
		for (int j = 0; j < columns; j++)
		{
			cin >> value;
			labyrinth.SetValue(i, j, value);
		}
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			out << labyrinth.GetValue(i, j);
			if (j < columns - 1) out << ' ';
		}
		if (i < lines -1) out << endl;
	}

	out.close();
}

void Show_Labyrinth(Stack<int**> labyrinth)
{
	cout << labyrinth.GetLines() << endl;
	/*for (int i = 0; i < labyrinth.GetLines(); i++)
	{
		for (int j = 0; j < labyrinth.GetColumns(); j++)
		{
			cout << labyrinth.GetValue(i, j);
			if (j < labyrinth.GetColumns() - 1) cout << ' ';
		}
		if (i < labyrinth.GetLines() - 1) cout << endl;
	}*/
}