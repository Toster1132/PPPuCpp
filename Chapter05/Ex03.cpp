#include <iostream>
using namespace std;

double ctok(double);

int main()
{
    try
    {
        cout << "Convertion from C to K\n";
        double c = 0;
        cin >> c;
        if(c+273.15 <= 0)throw c;
        double k = ctok(c);
        cout << k << '\n';
        return 0;
    }
    catch(double c)
    {
        cerr << "oops! temp. below absolute zero\n";
        return -1;
    }
}

double ctok(double c)
{
    double k = c + 273.15;
    return k;
}