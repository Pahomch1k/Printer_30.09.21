#include <iostream>
#include <time.h>
#include "Human.h"
#include "Printer.h"
using namespace std;

int main()
{
	srand(time(0));

	//�������� �������
	Printer QU(25);
	Human c;
	int t = 1;
	cout << "How many client ?" << endl;
	cin >> t;

	//���������� ����� ���������
	QU.Add(c, t); 
	//����� �������
	QU.Show();

	for (size_t i = 0; i < t; i++)
	{
		//���������� ��������
		QU.Extract();

		//����� �������
		QU.Show();
	}
	

	system("pause");

}
