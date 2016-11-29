#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int Arg1, Ans, st;
	cout << "Введите двоичное число: ";
	cin >> Arg1;
	Ans = 0;
	Ans += Arg1 % 10;
	Arg1 /= 10;
	st = 1;	
	    while (Arg1 != 0)
    {
        Ans += (Arg1 % 10) * pow(2, st);
        Arg1 /= 10;
        st = st + 1;
    }
    cout << "Ваше десятичное число: " << Ans;
    cin.get();
    return 0;
}
