#include <iostream>
using namespace std;

double ctok(double);

int main()
{
    cout << "Convertion from C to K\n";
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << '\n';
    return 0;
}

double ctok(double c)
{
    double k = c+273.15;
    return k;
}