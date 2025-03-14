#include <iostream>
using namespace std;

int main()
{
    cout << "Mile to Kilometer converter!\n" << "Type in miles and get kilometers: \n";
    double x = 0.0;
    cin >> x;
    cout << x << " Miles = " << x*1.609 << " km";
    return 0;
}