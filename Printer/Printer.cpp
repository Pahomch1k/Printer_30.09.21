#include "Printer.h"
#include <iostream>
#include <time.h>
#include <string>
#include "Human.h"
using namespace std;


Printer::Printer(int m)
{
	//получаем размер
	MaxPrinterLength = m;
	//создаем очередь
	Hptr = new Human[MaxPrinterLength];
	// »значально очередь пуста
	PrinterLength = 0;
}

Printer::~Printer()
{
	//удаление очереди
	delete[]Hptr;
}

void Printer::AddHuman(Human obj)
{
	obj.InIt();
}

void Printer::Add(Human c, int t)
{
	// ≈сли в очереди есть свободное место, то увеличиваем количество
	// значений и вставл€ем новый элемент
	for (size_t i = 0; i < t; i++)
	{
		c.InIt();
		if (!IsFull())
			Hptr[PrinterLength++] = c;
	}
	
}

Human Printer::Extract()
{
	// ≈сли в очереди есть элементы, то возвращаем тот, 
	// который вошел первым и сдвигаем очередь	
	if (!IsEmpty())
	{
		//запомнить первый
		Human temp = Hptr[0];
		temp.Print();

		//сдвинуть все элементы
		for (int i = 1; i < PrinterLength; i++)
			Hptr[i - 1] = Hptr[i];

		//уменьшить количество
		PrinterLength--;
		//вернуть первый(нулевой)
		return temp;
	}
}

void Printer::Clear()
{
	// Ёффективна€ "очистка" очереди 
	PrinterLength = 0;
}

bool Printer::IsEmpty()
{
	// ѕуст?
	return PrinterLength == 0;
}

bool Printer::IsFull()
{
	// ѕолон?
	return PrinterLength == MaxPrinterLength;
}

int Printer::GetCount()
{
	//  оличество присутствующих в стеке элементов
	return PrinterLength;
}

void Printer::Show()
{
	cout << "\n-------------------------------------\n";
	//демонстраци€ очереди
	for (int i = 0; i < PrinterLength; i++)
	{
		Hptr[i].Print();
	}
	cout << "\n-------------------------------------\n";
}


