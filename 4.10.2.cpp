#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	int A4, A10, st, B7, B10, Ans10, i;
	cout << "Введите четверичное число А: ";
	cin >> A4;
	A10 = 0;
	A10 += A4 % 10;
	A4 /= 10;
	st = 1;	
	    while (A4 != 0)
    {
        A10 += (A4 % 10) * pow(4, st);
        A4 /= 10;
        st = st + 1;
    }
    cout << "Введите семеричное число В: ";
	cin >> B7;
	B10 = 0;
	B10 += B7 % 10;
	B7 /= 10;
	st = 1;	
	    while (B7 != 0)
    {
        B10 += (B7 % 10) * pow(7, st);
        B7 /= 10;
        st = st + 1;
    }
    Ans10 = pow(B10, 3) - pow(B10, 2) + 2 * A10;
    cout << "Ответ в десятиричной системе: " << Ans10 << endl;
    i = 25;
    for (; pow(2, i) > Ans10;) i = i - 1;
    for (i; i != -1; i--)
    {
    	if (pow(2, i) <= Ans10)
    	{
			Ans10 = Ans10 - pow(2, i);
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
    cin.get();
    return 0;
}
