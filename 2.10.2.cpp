#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int Arg1, sum;
	cout << "Введите число: ";
    cin >> Arg1;
    while (Arg1!=0)
    {
        sum += Arg1%10;
        Arg1 /= 10;
    }
    cout << "\nСумма цифр числа: " << sum;
	cin.get();
	return 0;
}
