#include "Printer.h"
#include <iostream>
#include <time.h>
#include <string>
#include "Human.h"
using namespace std;


Printer::Printer(int m)
{
	//�������� ������
	MaxPrinterLength = m;
	//������� �������
	Hptr = new Human[MaxPrinterLength];
	// ���������� ������� �����
	PrinterLength = 0;
}

Printer::~Printer()
{
	//�������� �������
	delete[]Hptr;
}

void Printer::AddHuman(Human obj)
{
	obj.InIt();
}

void Printer::Add(Human c, int t)
{
	// ���� � ������� ���� ��������� �����, �� ����������� ����������
	// �������� � ��������� ����� �������
	for (size_t i = 0; i < t; i++)
	{
		c.InIt();
		if (!IsFull())
			Hptr[PrinterLength++] = c;
	}
	
}

Human Printer::Extract()
{
	// ���� � ������� ���� ��������, �� ���������� ���, 
	// ������� ����� ������ � �������� �������	
	if (!IsEmpty())
	{
		//��������� ������
		Human temp = Hptr[0];
		temp.Print();

		//�������� ��� ��������
		for (int i = 1; i < PrinterLength; i++)
			Hptr[i - 1] = Hptr[i];

		//��������� ����������
		PrinterLength--;
		//������� ������(�������)
		return temp;
	}
}

void Printer::Clear()
{
	// ����������� "�������" ������� 
	PrinterLength = 0;
}

bool Printer::IsEmpty()
{
	// ����?
	return PrinterLength == 0;
}

bool Printer::IsFull()
{
	// �����?
	return PrinterLength == MaxPrinterLength;
}

int Printer::GetCount()
{
	// ���������� �������������� � ����� ���������
	return PrinterLength;
}

void Printer::Show()
{
	cout << "\n-------------------------------------\n";
	//������������ �������
	for (int i = 0; i < PrinterLength; i++)
	{
		Hptr[i].Print();
	}
	cout << "\n-------------------------------------\n";
}


