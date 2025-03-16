#include <iostream>
#include <cmath>
using namespace std;

void delta(double, double, double);

int main()
{
    double a = 0, b = 0, c = 0;
    cout << "Quadratic equation calculator!\n" << "enter ax^2,bx,c one after another: \n";
    cin >> a >> b >> c;
    delta(a, b, c);

    return 0;
}

void delta(double a, double b, double c)
{
    double delta = (pow(b, 2) - (4 * a * c));
    if (delta > 0)
    {
        cout << ((-b + sqrt(delta)) / 2 * a) << '\n'
             << ((-b - sqrt(delta)) / 2 * a) << '\n';
    }
    else if (delta == 0)
    {
        cout << "Quadratic equation equals: " << (-b / (2 * a)) << '\n';
    }
    else
    {
        cout << "No real roots\n";
    }
}