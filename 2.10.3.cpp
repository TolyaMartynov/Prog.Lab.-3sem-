#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	double x, Arg1, Arg2;
	cout << "Дано большое и сложное выражение, которое мне лень вводить.\nВведите х: ";
	cin >> x;
	Arg1 = (pow(x, 1 + 3 * 3.14 / 4)) - (3 * pow(x, 3));
	Arg2 = (pow(x+1, 4)) + (log10(x/(x + 1)));
	cout << "y = " << Arg1 - pow(Arg2, 1/5);
	cin.get();
	return 0;
}
