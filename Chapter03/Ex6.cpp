#include <iostream>
using namespace std;

int main()
{
    cout << "Type in three int's: \n";
    int x = 0, y = 0, z = 0;
    cin >> x >> y >> z;

    if (x > y)
    {
        if (y > z)
        {
            cout << z << ',' << y << ',' << x;
        }
        else if (y < z)
        {
            if (z > x)
            {
                cout << y << ',' << x << ',' << z;
            }
            else if (z < x)
            {
                cout << y << ',' << z << ',' << x;
            }
        }
        else if (y == z)
        {
            cout << y << ',' << z << ',' << x;
        }
    }
    else if (x < y)
    {
        if (y < z)
        {
            cout << x << ',' << y << ',' << z;
        }
        else if (y > z)
        {
            if (z > x)
            {
                cout << x << ',' << z << ',' << y;

            }
            else if (z < x)
            {
                cout << z << ',' << x << ',' << y;

            }
            else if(x == z)
            {
                cout << x << ',' << z << ',' << y;
            }
        }
    }
    else if(x == y)
    {
        if (z > x)
        {
            cout << x << ',' << y << ',' << z;

        }
        else if (z < x)
        {
            cout << z << ',' << x << ',' << y;

        }
        else if(y == z)
        {
            cout << x << ',' << y << ',' << z;
        }
    }
    return 0;
}