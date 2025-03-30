#include <iostream>
#include <vector>
using namespace std;

void index(const vector<double> &, const vector<double> &);

int main()
{
    try
    {
        vector<double> price = {1,2,3};
        vector<double> weight = {1,2,4};
        index(price, weight);
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}

void index(const vector<double> &p, const vector<double> &w)
{
    if (p.size() != w.size())
        throw runtime_error("Error, different sizes");
    double temp = 0.0;
    for (int i = 0; i < w.size(); i++)
    {
        temp += p[i]*w[i];
    }
    cout << "The index is == " << temp << '\n';
}