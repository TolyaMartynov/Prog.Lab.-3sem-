#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	double a, b, c;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	c = b;
	b = a;
	a = c;
	cout << "\n\na = " << a
	     <<"\nb = " << b;
    cin.get();
	return 0;	
}
