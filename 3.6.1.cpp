#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cout << "¬ведите x: ";
	cin >> x;
	if (x<-3)
	  y=3;
	else
	  y=4;
	cout << "\ny = " << y;
	cin.get();
	return 0;
}
