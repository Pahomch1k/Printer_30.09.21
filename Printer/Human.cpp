#include "Human.h"
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

Human::Human()
{
	name = "0";
	text = "0";
}

void Human::InIt()
{
	cout << "In name: ";
	cin >> name;
	cout << "In text: "; 
	cin >> text;
}

void Human::Print()
{
	cout << "name: " << name << endl;
	cout << "text: " << text << endl;
}

ostream& operator<<(ostream& os, const Human& obj)
{
	os << obj.text << " " << obj.name;
	return os;
}
