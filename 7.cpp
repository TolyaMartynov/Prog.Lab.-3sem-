#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	double N, sum1;
	double mas[100];
	int i, count;
	cout << "������� ������ �������: ";
	cin >> N;
	cout << "������� ������ �� " << N << " ���������: ";
	count = 0;
	for (i=0; i<N; i++)
	{
		cin >> mas[i];
		if (mas[i]>0)
		{
			sum1 += mas[i];
			count++;
		}
	}
	cout << "������� �������������� ������������� ��������� ������� �����: " << sum1/count;
	cin.get();
	return 0;
}
