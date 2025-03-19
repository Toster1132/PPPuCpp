#include <iostream>
using namespace std;

double celToF(double);
double FtoCel(double);

int main()
{
    try
    {
        cout << "celsius to fahrenheit converter, or vice versa\n";
        double input = 0.0;
        cin >> input;
        if (input < -273.15)
        {
            cout << FtoCel(input) << " C" << '\n';
            return 0;
        }
        char choose = ' ';
        cout << "Have you entered fahrenheit or celsius?? 'f'/'c' \n";
        cin >> choose;
        if (choose == 'f' || choose == 'F')
        {
            cout << FtoCel(input) << '\n';
        }
        else if (choose == 'c' || choose == 'C')
        {
            cout << celToF(input) << '\n';
        }
        else
        {
            throw choose;
        }
        return 0;
    }
    catch (char choose)
    {
        cerr << "You have made a typo!\n";
        return -1;
    }
}

double celToF(double c)
{
    return ((c + 32) * 1.8);
}
double FtoCel(double f)
{
    return ((f - 32) / 1.8);
}