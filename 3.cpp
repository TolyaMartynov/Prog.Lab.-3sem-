#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int Arg1, st;
	cout << "Какое число Вы хотите возвести в степень? " << endl;
	cin >> Arg1;
	cout << "В какую степень вы хотите возвести число " << Arg1 << "? " << endl;
	cin >> st;
	cout << Arg1 << " в степени " << st <<	" равно " << pow(Arg1, st);
	cin.get();
	return 0;
}
