#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void input(vector<string> &);
void input(vector<int> &);
void sortNames(vector<string> &);
int matchingCp(const string &, const vector<string> &);
void matchingAndPrint(vector<string> &, vector<string> &, vector<int> &, vector<int> &);

int main()
{
    try
    {
        vector<string> names;
        vector<int> age;
        cout << "enter 5 names and then 5 values (eg. ages)\n";
        // get values
        input(names);
        cout << "now enter those values\n";
        input(age);
        // making copies
        vector<string> copyNames = names;
        vector<int> copyAge = age;
        // sort 'em
        sortNames(names);
        // finish matching and print
        matchingAndPrint(names, copyNames, age, copyAge);
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}

void input(vector<string> &v)
{
    for (int i = 0; i < 5; i++)
    {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }
}

void input(vector<int> &v)
{
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
}

void sortNames(vector<string> &v)
{
    sort(v.begin(), v.end());
}

int matchingCp(const string &orig, const vector<string> &copies)
{
    for (int i = 0; i < copies.size(); ++i)
    {
        if (orig == copies[i])
            return i;
    }
    throw runtime_error("mess happened");
}

void matchingAndPrint(vector<string> &names, vector<string> &copyNames, vector<int> &age, vector<int> &copyAges)
{
    vector<int> sortedAges(names.size());
    for (int i = 0; i != names.size(); ++i)
    {
        int temp = matchingCp(names[i], copyNames);
        sortedAges[i] = copyAges[temp];
    }
    age = sortedAges;

    for (int i = 0; i != names.size(); ++i)
    {
        cout << '(' << names[i] << ',' << age[i] << ")\n";
    }
}