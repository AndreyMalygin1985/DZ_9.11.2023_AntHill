﻿#include<iostream>
#include<Windows.h>
#include"Human.h"
#include"House.h"
#include"Apartment.h"
#include"Date.h"

using namespace std;

// Создайте программу, имитирующую многоквартирный дом.
// Необходимо иметь классы “Человек”, “Квартира”, “Дом”.Класс “Квартира” содержит динамический массив
// объектов класса “Человек”.Класс “Дом” содержит массив объектов класса “Квартира”.
// Каждый из классов содержит переменные-члены и функции-члены, которые необходимы для предметной области
// класса.
//
// Обращаем ваше внимание, что память под строковые значения выделяется динамически.Например, для
// ФИО в классе “Человек”.Не забывайте обеспечить классы различными конструкторами деструкторами.
//
// В main протестировать работу полученного набора классов

int main()
{
	SetConsoleOutputCP(1251);

	Date birthday_one(17, 05, 1985);
	Human human_one("Малыгин", "Андрей", "Валерьевич", birthday_one);
	//Human y{ x };
	//y.setFirstName("Пауль");

	human_one.showHuman();


	return 0;
}