#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int select;
	cout << "Какую систему счисления температуры использовать?" << endl
	   	<< "1: По Цельсию" << endl
		<< "2: По Фаренгейту" << endl
		<< "3: По Кельвину" << endl;
	cin >> select;
	cout << "Введите вашу температуру: ";
	double C;
	double F;
	double K;
	if (select == 1)
		cin >> C, (F = (C*1.8) + 32), (K = C + 273);
	if (select == 2)
		cin >> F, (C = (F - 32) / 1.8), (K = C + 273);
	if (select == 3)
		cin >> K, C = K - 273, (F = (C*1.8) + 32);
	cout << endl;
	cout << "Ваша температура:" << endl
		<< "В градусах по Цельсию: " << C << endl
		<< "В градусах по Фаренгейту: " << F << endl
		<< "В градусах по Кельвину: " << K << endl;
	cin.get();
	cin.get();
	return 0;
}
