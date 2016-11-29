#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#define N 100
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double mas[N], ArgP, ArgM;
	int i;
	cout << "Введите последовательность чисел: ";
	ArgP = ArgM = 0;
	for (i; i <= N; i = i + 1)
	{
		cin >> mas[i];
		if (mas[i] > 0)
			ArgP = ArgP + 1;
		if (mas[i] < 0)
		    ArgM = ArgM + 1;
		if (mas[i] == 0)
		    break;
	}
	cout << "В этой последовательности " 
	     <<	ArgP * 100 / (ArgP + ArgM) 
		 << "% положительных элементов и "
		 << ArgM * 100 / (ArgP + ArgM) 
		 << "% отрицательных элементов";
    cin.get();
    return 0;
}
