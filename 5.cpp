#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	const int Try = 5;
	int Arg1, Random, N;
	cout << "Я загадал число. Угадайте его!" << endl;
	srand(time(NULL));
	Random = rand();
	N = Try;
	while (N != 0)
	{
		cout << "У вас осталось попыток: " << N
		     << "\nВведите число: ";
	    cin >> Arg1;
	    N = N - 1;
	    if (Arg1==Random)
	        {
	          cout << "Вы угадали!";
			  break;
		    }
		else
		    {
		      cout << "Вы не угадали!";
			}
	}
	if (N > 0)
	   {
	   	cout << "\nПобеда";
	   }
	else
	   {
	   	cout << "\nПроигрыш. Я загадал число " << Random;
	   }
	cin.get();
	return 0;
}
