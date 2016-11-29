#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <cmath>

using namespace std;

double func(double x)
{
    return (x * log(x)) - 1;
}
 
double find(double infinum, double supremum, double epsilon)
{
    while (fabs(supremum - infinum) > epsilon)
    {
        infinum = supremum - (supremum - infinum) * func(supremum) / (func(
                supremum) - func(infinum));
        supremum = infinum - (infinum - supremum) * func(infinum) / (func(
                infinum) - func(supremum));
    }
 
    return supremum;
}
 
int main()
{
    double a = -10, b = 10;
    cout << find(a, b, 0.0001) << endl;
    return 0;
}
