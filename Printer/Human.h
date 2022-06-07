#pragma once
#include "Human.h"
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class Human
{
	string text;
	string name;
	friend ostream& operator<< (ostream& os, const Human& obj);

public:

	Human();

	void InIt();
	void Print();
};

