#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	double a, b, c, x1, x2, Desc;
	cout << "Введите множители в квадратном уравнении:" << endl
	     << "Введите множитель при переменной второй степени: ";
    cin >> a;
    cout << "Введите множитель при переменной первой степени: ";
    cin >> b;
    cout << "Введите свободный член: ";
    cin >> c;
    Desc = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrtf(Desc)) / (2 * a);
    x2 = (-b - sqrtf(Desc)) / (2 * a);
    cout << "Ответ №1: x=" << x1 << "\nОтвет №2: x=" << x2;
    cin.get();
    return 0;
}
