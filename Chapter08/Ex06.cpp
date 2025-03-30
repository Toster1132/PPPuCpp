#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vectorReverse(vector<string>);
void vectorOrig(const vector<string> &);

int main()
{
    vector<string> orig = {"pomidor", "ziemniak", "kalamarnica"};
    cout << "reversed: \n"
         << "----\n";
    vectorReverse(orig);
    cout << '\n'
         << "original: \n"
         << "----\n";
    vectorOrig(orig);
    return 0;
}

void vectorReverse(vector<string> origLocal)
{
    // swapping local v
    int size = origLocal.size();
    for (int i = 0; i < size / 2; i++)
    {
        swap(origLocal[i], origLocal[size - i - 1]);
    }
    // print reversed
    for (const auto &var : origLocal)
    {
        cout << var << '\n';
    }
}
void vectorOrig(const vector<string> &v)
{
    for (const auto &var : v)
    {
        cout << var << '\n';
    }
}
