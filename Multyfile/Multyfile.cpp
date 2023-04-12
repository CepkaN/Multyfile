#include<iostream>
#include"Functions.h"
#include"Stuctures.h"
#include"Data.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;

	// Простые функции в отдельном файле.
	/*std::cout << "Введите два числа : ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << "\n";
	hi();*/

	const int size = 10;
	int arr[size]{ 2,4,5,6,7 };
	print_arr(arr, size);
	person p1{
		"Tom Smith",
		20,
		"middle C++ developer",
		80000
	};
	std::cout << '\n';
	_A = 5;
	print_person(p1);

	_A = 10;
	std::cout <<"A = "<< _A << '\n';
	std::cout << "PI = " << _PI << '\n';
	std::cout << "E = " << _E << '\n';


	return 0;
}