#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int numb;
	cout << "������� �����: ";
	cin >> numb;
	if (numb > 0)
		numb = numb * 2;
	if (numb < 0)
		numb = numb - 3;
	if (numb == 0)
		numb = 10;
	cout <<"������ ���� �����: " << numb;
	cin.get();
	cin.get();
	return 0;
}

