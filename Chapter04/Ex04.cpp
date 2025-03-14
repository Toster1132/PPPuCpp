#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Think of an number <1-100>\n";

    int beg = 1, end = 100, number = 0;
    char yn = ' ';

    while (number != 101)
    {
        number = floor((beg + end) / 2);
        cout << "Is your number " << number << "? Y/N\n";
        cin >> yn;
        if (yn == 'Y')
        {
            cout << "I won\n";
            break;
        }
        else
        {
            cout << "Is your number bigger than " << number << "? Y/N\n";
            cin >> yn;
            if (yn == 'Y')
            {
                beg = number + 1;
            }
            else if (yn == 'N')
            {
                end = number - 1;
            }
        }
    }

    return 0;
}