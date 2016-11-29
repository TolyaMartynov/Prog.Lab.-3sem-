#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, h, max;
	cout << "¬ведите минимальное значение угла в радианах без минуса. а =  ";
	cin >> a;
	max = a;
	a = -a;
	cout << "¬ведите шаг h = ";
	cin >> h;
	for (a; a <= max;)
	{
		cout << 2*sin(a) << endl;
		a = a + h;
	}
	cin.get();
	return 0;
}
