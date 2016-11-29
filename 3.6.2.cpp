#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	bool result;
	cout << "¬ведите координаты x = ";
	cin >> x;
	cout << "¬ведите координаты y = ";
	cin >> y;
	if ((y>=x-1) && (y<=x+1) && (((y<=-x-3) && (y>=-x-5)) || ((y<=x+5) && (y>=x+3))))
	  {
	  	cout << "\n¬ведЄнные координаты наход€тс€ внутри закрашенной зоны";
	  }
	else
	  {
	   cout << "\n¬ведЄнные координаты не наход€тс€ внутри закрашенной зоны";
      }
	cin.get();
	return 0;	
}
