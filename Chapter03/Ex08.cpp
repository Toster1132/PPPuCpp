#include <iostream>
using namespace std;

int main()
{
    cout << "Type in int and I will determine is this number and odd or even: \n";
    int x = 0;
    cin >> x;

    if (x % 2 == 0)
    {
        cout << x << " Is even number\n";
    }
    else
    {
        cout << x << " Is odd number\n";
    }
    return 0;
}
