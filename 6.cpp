#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int select;
	cout << "����� ������� ��������� ����������� ������������?" << endl
	   	<< "1: �� �������" << endl
		<< "2: �� ����������" << endl
		<< "3: �� ��������" << endl;
	cin >> select;
	cout << "������� ���� �����������: ";
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
	cout << "���� �����������:" << endl
		<< "� �������� �� �������: " << C << endl
		<< "� �������� �� ����������: " << F << endl
		<< "� �������� �� ��������: " << K << endl;
	cin.get();
	cin.get();
	return 0;
}
