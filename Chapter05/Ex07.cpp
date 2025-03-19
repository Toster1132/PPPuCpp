#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    try
    {
        cout << "Quadratic equation calc but i dont care if delta = 0\n";
        double a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        double delta = sqrt((pow(b, 2) - (4 * a * c)));
        if (delta <= 0)
            throw delta;
        cout << "x1 = " << ((-b + delta) / (2 * a)) << " x2 = " << ((-b - delta) / (2 * a)) << '\n';
        return 0;
    }
    catch (double delta)
    {
        cerr << "Delta is zero or is less than a zero!\n";
        return -1;
    }
}