#include <iostream>
using namespace std;

int main()
{
    cout << "Type in two values: \n";
    double val1 = 0.0, val2 = 0.0;
    cin >> val1 >> val2;

    if (val1 > val2)
    {
        cout << val1 << " Is bigger than " << val2 << '\n';
        cout << "Difference between" << val1 << " and " << val2 << "Is " << val1 - val2 << '\n';
    }
    else if (val2 > val1)
    {
        cout << val2 << " Is bigger than " << val1 << '\n';
        cout << "Difference between" << val2 << " and " << val1 << "Is " << val2 - val1 << '\n';
    }

    cout << "Product of those numbers equals: " << val2 * val1 << '\n';

    return 0;
}