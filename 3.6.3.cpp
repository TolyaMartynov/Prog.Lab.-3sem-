#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "y = ax + b\nВведите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	if (a == 0)
		cout << "Данная линия не пересекает ось абсцис";
    else 
        cout << "Данная линия пересекает ось абсцис в точке " << -b/a;
    cin.get();
    return 0;
}
