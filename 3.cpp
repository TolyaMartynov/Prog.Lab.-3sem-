#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int Arg1, st;
	cout << "����� ����� �� ������ �������� � �������? " << endl;
	cin >> Arg1;
	cout << "� ����� ������� �� ������ �������� ����� " << Arg1 << "? " << endl;
	cin >> st;
	cout << Arg1 << " � ������� " << st <<	" ����� " << pow(Arg1, st);
	cin.get();
	return 0;
}
