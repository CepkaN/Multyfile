#include "Stuctures.h"
#include<iostream>
 // #include"Data.h" // ������, ��� ��� ����������� ���������� ����������.

extern int _A;  // ����������� ���������� ����������, ����������� �� ��, ��� ��� ��� ��������� � ������ �����.

void print_person(const person& p)
{
	std::cout << "��� :       " << p.name << '\n';
	std::cout << "������� :   " << p.age << '\n';
	std::cout << "��������� : " << p.job << '\n';
	std::cout << "�������� :  " << p.salary << '\n';
	std::cout << "A = " << _A << '\n';
}
