#include <iostream>
using namespace std;

int main()
{
    cout << "If you type in an int, you get it in string (only 0,1,2 or 3): \n";
    int x = 0;
    cin >> x;
    // In case of string it returns "zero"
    if(x ==0)
    {
        cout << "Zero\n";
    }
    else if(x == 1)
    {
        cout << "One\n";
    }
    else if(x == 2)
    {
        cout << "Two\n";
    }
    else if(x == 3)
    {
        cout << "Three\n";
    }
    else
    {
        cout << "Learn how to read\n";
    }

    return 0;
}