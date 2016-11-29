#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#define N 100
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int Arg1, Arg2, Arg3;
	cout << "¬ведите первое число: ";
	cin >> Arg1;
	cout << "¬ведите второе число: ";
	cin >> Arg2;
	   if (Arg1 < Arg2)
	   {
	      Arg3 = Arg1;
		  Arg1 = Arg2;
		  Arg2 = Arg3;
	   }
   while(Arg2 != 0) 
   {
     Arg3 = Arg2;
     Arg2 = Arg1 % Arg2;
     Arg1 = Arg3;
   }
   if (Arg1 == 1)
      cout << "Ёти числа €вл€ютс€ взаимно простыми";
   else
      cout << "Ёти числа не €вл€ютс€ взаимно простыми";
      cin.get();
   return 0;
}
