#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, Arg1, sum;
	cout << "¬ведите максимальное значение N = ";
	cin >> N;
	sum = 0;
	Arg1 = 0;
	for (Arg1; Arg1 <= N; Arg1 = Arg1 + 2)
	{
		sum = sum + pow(Arg1, 2);
	}
	cout << "¬аш ответ: " << sum;
	cin.get();
	return 0;
}
