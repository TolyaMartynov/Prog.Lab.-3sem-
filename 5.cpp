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
	cout << "� ������� �����. �������� ���!" << endl;
	srand(time(NULL));
	Random = rand();
	N = Try;
	while (N != 0)
	{
		cout << "� ��� �������� �������: " << N
		     << "\n������� �����: ";
	    cin >> Arg1;
	    N = N - 1;
	    if (Arg1==Random)
	        {
	          cout << "�� �������!";
			  break;
		    }
		else
		    {
		      cout << "�� �� �������!";
			}
	}
	if (N > 0)
	   {
	   	cout << "\n������";
	   }
	else
	   {
	   	cout << "\n��������. � ������� ����� " << Random;
	   }
	cin.get();
	return 0;
}
