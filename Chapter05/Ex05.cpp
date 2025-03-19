#include <iostream>
using namespace std;

double ctok(double);
double ktoc(double);

int main()
{
    try
    {
        cout << "Convertion from C to K, if you wanna convert from K to C enter -500\n";
        double c = 0;
        cin >> c;
        if (c == -500)
        {

            cout << "Convertion from K to C, if you wanna convert back from C to K enter -500\n";
            cin >> c;
            cout << ktoc(c) << '\n';
            return 0;
        }
        double k = ctok(c);
        cout << k << '\n';
        return 0;
    }
    catch (double c)
    {
        cerr << "oops! temp. below absolute zero\n";
        return -1;
    }
}

double ctok(double c)
{
    if (c + 273.15 <= 0)
        throw c;
    double k = c + 273.15;
    return k;
}
double ktoc(double k)
{
    if (k - 273.15 < 0)
        throw k;
    double c = k - 273.15;
    return c;
}