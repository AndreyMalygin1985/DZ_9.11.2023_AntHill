#pragma once
#include"Human.h"

class Apartment
{
public:
	Human* human;
	size_t number_apart;			// номер квартиры
	size_t kol_human;				// количество проживающих людей

	Apartment(size_t& number_apart, size_t& kol_human, Human *human) :
		number_apart{ 0 }, kol_human{ 0 }, human{ human }
	{
		if (number_apart >= 1 && number_apart <= 1110) {
			this->number_apart = number_apart;
		}
		if (kol_human >= 1 && kol_human <= 7) {
			this->kol_human = kol_human;
		}
	};

	//Apartment() : number_apart(0), kol_human(0) {}
	Apartment() : Apartment(0, 0, Human()) {}

	Apartment& setNumberApart(size_t number_apart) {
		this->number_apart = number_apart >= 1 && number_apart <= 1110 ? number_apart : 0;
		return *this;
	}
	Apartment& setKolHuman(size_t kol_human) {
		this->kol_human = kol_human >= 1 && kol_human <= 7 ? kol_human : 0;
		return *this;
	}

	void showApartment()
	{
		cout << "Квартира № : " << number_apart << " проживают " << kol_human << " человек(а)" << endl;
		cout << endl;
	}
};

