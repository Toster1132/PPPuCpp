#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>&,string);

int main()
{
    vector<int>v = {0,1,2,3,4,4};
    string label = "Printing the vector :3";
    print(v,label);
    return 0;
}

void print(const vector<int>&v,string label)
{
    cout << label << '\n';
    for(const auto& var:v)
    {
        cout << var << '\n';
    }
}