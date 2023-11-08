#include "Human.h"

using namespace std;

char* Human::createName(char const* name)
{
	char* temp = new char[strlen(name) + 1];
	strcpy_s(temp, strlen(name) + 1, name);
	return temp;
}

void Human::showHuman()
{
	cout << "Ф И О: " << surname << " " << first_name << " " << last_name << endl;
	cout << "Днюха: ";
	birthday.showDate();
	cout << endl;
}