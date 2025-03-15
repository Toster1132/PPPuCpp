#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "I don't know what - calculator\n"
         << "Enter a number for how many grains of rice do u need, and I will output the amount of loops you need\n"
         << "Accepted numbers are: 1k,1m,1b and ONLY in digits\n";
    unsigned int howMany = 0;
    cin >> howMany;
    int whichSq = 0, grainOnSq = 0, sumSq = 0;

    int x1 = pow(10, 3), x2 = pow(10, 6), x3 = powl(10, 9);

    if (howMany == x1)
    {
        for (int i = 1; i != -1; i++)
        {
            whichSq++;
            grainOnSq = i * i;
            sumSq += grainOnSq;
            if (sumSq >= x1)
                break;
        }
    }
    else if (howMany == x2)
    {
        for (int i = 1; i != -1; i++)
        {
            whichSq++;
            grainOnSq = i * i;
            sumSq += grainOnSq;
            if (sumSq >= x2)
                break;
        }
    }
    else if (howMany == x3)
    {
        for (int i = 1; i != -1; i++)
        {
            whichSq++;
            grainOnSq = i * i;
            sumSq += grainOnSq;
            if (sumSq >= x3)
                break;
        }
    }
    else
    {
        cout << "Invalid input\n";
        return 0;
    }

    cout << "You need " << whichSq << " Loops\n";

    return 0;
}