#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "y = ax + b\n������� �: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	if (a == 0)
		cout << "������ ����� �� ���������� ��� ������";
    else 
        cout << "������ ����� ���������� ��� ������ � ����� " << -b/a;
    cin.get();
    return 0;
}
