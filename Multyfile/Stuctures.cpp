#include "Stuctures.h"
#include<iostream>
 // #include"Data.h" // ОШИБКА, так как дублируется объявление переменных.

extern int _A;  // Модификатор объявления переменной, указывающей на то, что она уже объявлена в другом файле.

void print_person(const person& p)
{
	std::cout << "Имя :       " << p.name << '\n';
	std::cout << "Возраст :   " << p.age << '\n';
	std::cout << "Должность : " << p.job << '\n';
	std::cout << "Зарплата :  " << p.salary << '\n';
	std::cout << "A = " << _A << '\n';
}
