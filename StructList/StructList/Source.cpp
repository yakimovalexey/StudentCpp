#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <conio.h>

using namespace std;

template <class T, class T2>
class Book
{
public:
	T Name;
	T2 Year;
};
class List
{
public:
	class Node
	{
	public:
		Book<char*, int> data;

		Node* next;
		Node* prev;
	};
	Node* head = nullptr;
	// NULL = 0
	// nullptr - ������ ���������
	// ������� � ���, ���
	// NULL - ��� �����, �
	// nullptr - �������� ����� � ���������� ��� ������ ���������, �������� �������� ����� 0
	// ��������, nullptr ������������ ���  ���������� ������������ �������, ��� ���� ����� ������������ ��� ������ ���������

	void addFirst(Book<char*, int> book)
	{
		Node* temp = new Node;
		temp->data = book;
		temp->next = NULL;
		temp->prev = NULL;

		if (head == NULL)
		{
			head = temp;
			return;
		}

		temp->next = head;
		head->prev = temp;
		head = temp;
	}

	void print()
	{
		Node* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data.Name << " (" << temp->data.Year << ")" << endl;
			// ������, ��� ��������� - ��� ������ �����, �.�. �����
			// � ���� ������� �� ��������� � ���������� ����� ���������� ��������
			temp = temp->next;
		}
	}

	void clear()
	{

		while (head != nullptr)
		{
			// ������� ������������ ��� ������, ����������
			// ��� ���� ���������
			delete[] head->data.Name;

			Node* temp = head;
			head = head->next;

			// ����� ����� ����� ����������� ������ ������ �������� ������
			delete temp;
		}
	}
};

void main()
{
	setlocale(LC_ALL, "Rus");

	int arraySize = 3;
	List list;

	for (int i = 0; i < arraySize; i++)
	{
		Book<char*, int> book;

		char* buff = new char[255];
		cout << "����� " << i << ". ��������: ";
		cin >> buff;

		book.Name = new char[strlen(buff) + 1];
		strcpy(book.Name, buff);
		book.Name[strlen(buff)] = '\0';

		cout << "����� " << i << ". ���: ";
		cin >> book.Year;

		list.addFirst(book);
	}

	list.print();

	// ��� ������� ���� ������?
	list.clear();
	_getch();
}