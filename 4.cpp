#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	double a, b, c, x1, x2, Desc;
	cout << "������� ��������� � ���������� ���������:" << endl
	     << "������� ��������� ��� ���������� ������ �������: ";
    cin >> a;
    cout << "������� ��������� ��� ���������� ������ �������: ";
    cin >> b;
    cout << "������� ��������� ����: ";
    cin >> c;
    Desc = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrtf(Desc)) / (2 * a);
    x2 = (-b - sqrtf(Desc)) / (2 * a);
    cout << "����� �1: x=" << x1 << "\n����� �2: x=" << x2;
    cin.get();
    return 0;
}
