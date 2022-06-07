#pragma once
#include <iostream>
#include <time.h>
#include <string>
#include "Human.h"
using namespace std;

class Printer
{
	Human* Hptr;
	string arr[10];
	int MaxPrinterLength;
	int PrinterLength;

public:

	Printer(int m);
	~Printer();

	void AddHuman(Human obj);
	void Add(Human c, int t);
	Human Extract();
	void Clear();
	void Show();

	bool IsEmpty();
	bool IsFull();

	int GetCount();
};

