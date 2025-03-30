#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

class calcsOnVector
{
public:
    vector<int> vec;
    void sortVector(vector<int> &);
    void getVector(vector<int> &);
    int smallVector(const vector<int> &);
    int bigVector(const vector<int> &);
    int meanVector(const vector<int> &);
    int medianVector(const vector<int> &);
};

int main()
{
    try
    {
        calcsOnVector cov;
        cov.getVector(cov.vec);
        cov.sortVector(cov.vec);
        cout << "The smallest value of those: " << cov.smallVector(cov.vec) << '\n';
        cout << "The biggest value of those: " << cov.bigVector(cov.vec) << '\n';
        cout << "Mean of those: " << cov.meanVector(cov.vec) << '\n';
        cout << "Median of those: " << cov.medianVector(cov.vec) << '\n';
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}
void calcsOnVector::sortVector(vector<int> &v)
{
    sort(v.begin(), v.end());
}
void calcsOnVector::getVector(vector<int> &v)
{
    cout << "Enter ints, Terminate with anything else which is not int.\n";
    int temp = 0;
    while (cin >> temp)
    {
        v.push_back(temp);
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear on bad input
    if (vec.empty())
        throw runtime_error("No valid ints");
}
int calcsOnVector::smallVector(const vector<int> &v)
{
    return v[0];
}

int calcsOnVector::bigVector(const vector<int> &v)
{
    return v[v.size() - 1];
}
int calcsOnVector::meanVector(const vector<int> &v)
{
    int temp = 0;
    for (int i = 0; i < v.size(); i++)
    {
        temp += v[i];
    }
    return temp / v.size();
}
int calcsOnVector::medianVector(const vector<int> &v)
{
    if (v.size() % 2 == 0) // parzysty, even
    {
        return (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2;
    }
    else // nieparzysty, odd
    {
        return v[v.size() / 2];
    }
}