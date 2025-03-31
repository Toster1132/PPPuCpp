#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void vecSLength(const vector<string> &, vector<int> &);
void printInt(const vector<int> &);

string longestStr(const vector<string> &);
string shortestStr(const vector<string> &);
string firstStr(vector<string>);
string lastStr(vector<string>);

int main()
{
    vector<string> vs = {"12", "23", "twenty", "yahoooo", "a"};
    vector<int> vi;
    vecSLength(vs, vi);
    printInt(vi);
    cout << shortestStr(vs) << '\n';
    cout << longestStr(vs) << '\n';
    cout << firstStr(vs) << '\n';
    cout << lastStr(vs) << '\n';
    return 0;
}

void vecSLength(const vector<string> &vs, vector<int> &vi)
{
    // pushing back length's of elements from vs to vi
    for (const auto &var : vs)
    {
        vi.push_back(var.length());
    }
}
void printInt(const vector<int> &vi)
{
    for (const auto &var : vi)
    {
        cout << var << '\n';
    }
}
string shortestStr(const vector<string> &v)
{
    // returning shortest string
    return *min_element(v.begin(), v.end(), [](const string &a, const string &b)
                        { return a.length() < b.length(); });
}
string longestStr(const vector<string> &v)
{
    // returning longest string
    return *max_element(v.begin(), v.end(), [](const string &a, const string &b)
                        { return a.length() < b.length(); });
}
string firstStr(vector<string> v)
{
    // returning lexicographically first
    return *min_element(v.begin(), v.end());
}
string lastStr(vector<string> v)
{
    // returning lexicographically last
    return *max_element(v.begin(), v.end());
}