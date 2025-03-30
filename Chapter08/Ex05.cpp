#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vectorReverse(vector<int>);
void vectorOrig(const vector<int>&);

int main()
{
    vector<int> orig = {2, 4, 5, 6, 7, 3};
    cout << "reversed: \n";
    vectorReverse(orig);
    cout << "original: \n";
    vectorOrig(orig);
    return 0;
}

void vectorReverse(vector<int> origLocal)
{
    // swapping local v
    int size = origLocal.size();
    for (int i = 0; i < size/2; i++)
    {
        swap(origLocal[i], origLocal[size - i - 1]);
    }
    // print reversed
    for (const auto& var : origLocal)
    {
        cout << var << '\n';
    }
}
void vectorOrig(const vector<int>&v)
{
    for(const auto& var:v)
    {
        cout << var << '\n';
    }
}
