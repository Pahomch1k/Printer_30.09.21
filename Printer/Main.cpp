#include <iostream>
#include <time.h>
#include "Human.h"
#include "Printer.h"
using namespace std;

int main()
{
	srand(time(0));

	//создание очереди
	Printer QU(25);
	Human c;
	int t = 1;
	cout << "How many client ?" << endl;
	cin >> t;

	//заполнение части элементов
	QU.Add(c, t); 
	//показ очереди
	QU.Show();

	for (size_t i = 0; i < t; i++)
	{
		//извлечение элемента
		QU.Extract();

		//показ очереди
		QU.Show();
	}
	

	system("pause");

}
