#pragma once
#include"Human.h"

class Apartment
{
public:
	Human* human;
	size_t* number_apart;			// номер квартиры
	size_t* kol_human;				// количество проживающих людей
	//bool* free_status = new bool;   // статус квартиры (true - свободна, false - занята)
};

