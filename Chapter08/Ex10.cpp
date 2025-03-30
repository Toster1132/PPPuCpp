#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double maxv(vector<double>&);

int main()
{
    // in my interpretation  here "value" is either a int or float
    vector<double> test = {1,234,54};
    cout << maxv(test) << '\n';
    return 0;
}

double maxv(vector<double>&v)
{
    sort(v.begin(),v.end());
    return v[v.size()-1];
}