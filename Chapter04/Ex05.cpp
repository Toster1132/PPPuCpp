#include <iostream>
using namespace std;

int main()
{
    cout << "Very simple calculator (+,-,*,/)\n";
    double val1 = 0, val2 = 0;
    char oper = ' ';

    cin >> val1 >> oper >> val2;

    switch (oper)
    {
    case '+':
        cout << val1 + val2 << '\n';
        break;
    case '-':
        cout << val1 - val2 << '\n';
        break;
    case '*':
        cout << val1 * val2 << '\n';
        break;
    case '/':
        if (val1 == 0 || val2 == 0)
        {
            cout << "dividing by '0' is prohibited\n";
            break;
        }
        cout << val1 / val2 << '\n';
        break;
    default:
        cout << "Undefined operator\n";
        break;
    }

    return 0;
}