#pragma once
#include"Date.h"
#include<iostream>

class Human
{
public:
	char* surname;
	char* first_name;
	char* last_name;
	Date birthday;

	char* createName(char const* name);

	Human(const char* surname, const char* first_name, const char* last_name, Date birthday) :
		surname{ surname ? new char[strlen(surname) + 1] : nullptr },
		first_name{ first_name ? new char[strlen(first_name) + 1] : nullptr },
		last_name{ last_name ? new char[strlen(last_name) + 1] : nullptr },
		birthday{ birthday }
	{
		if (surname) {
			strcpy_s(this->surname, strlen(surname) + 1, surname);
		}
		if (first_name) {
			strcpy_s(this->first_name, strlen(first_name) + 1, first_name);
		}
		if (last_name) {
			strcpy_s(this->last_name, strlen(last_name) + 1, last_name);
		}
	};

	Human() : Human(nullptr, nullptr, nullptr, Date()) {}

	Human(const Human& obj) :
		surname{ obj.surname ? new char[strlen(obj.surname) + 1] : nullptr },
		first_name{ obj.first_name ? new char[strlen(obj.first_name) + 1] : nullptr },
		last_name{ obj.last_name ? new char[strlen(obj.last_name) + 1] : nullptr },
		birthday{ obj.birthday }
	{
		if (surname) {
			strcpy_s(this->surname, strlen(obj.surname) + 1, obj.surname);
		}
		if (first_name) {
			strcpy_s(this->first_name, strlen(obj.first_name) + 1, obj.first_name);
		}
		if (last_name) {
			strcpy_s(this->last_name, strlen(obj.last_name) + 1, obj.last_name);
		}
	}
	~Human()
	{
		delete[] surname;
		delete[] first_name;
		delete[] last_name;
	}

	char const* getSurName() {
		return surname;
	}
	char const* getFirstName() {
		return first_name;
	}
	char const* getLastName() {
		return last_name;
	}
	Date* getLDate() {
		return &birthday;
	}

	Human& setSurName(char const* surname) {
		delete[] this->surname;
		this->surname = createName(surname);
		return *this;
	}
	Human& setFirstName(char const* first_name) {
		delete[] this->first_name;
		this->first_name = createName(first_name);
		return *this;
	}
	Human& setLastName(char const* last_name) {
		delete[] this->last_name;
		this->last_name = createName(last_name);
		return *this;
	}
	Human& setDate(unsigned short day, unsigned short month, unsigned short year) {
		birthday.setDay(day).setMonth(month).setYear(year);
		return *this;
	}

	void showHuman();
};

