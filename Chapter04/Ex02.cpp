#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Type in temperatures, and you will get a  median of those: \n";
    vector<double> temps;
    for (double temp; cin >> temp;)
    {
        temps.push_back(temp);
    }

    sort(temps.begin(), temps.end());

    cout << "Median of those temperatures equals: ";

    int n = temps.size();

    if (n % 2 == 0)
    {
        cout << (temps[n / 2] + temps[n / 2 - 1]) / 2;
    }
    else
    {
        cout << temps[n / 2];
    }
    return 0;
}