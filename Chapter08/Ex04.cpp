#include <iostream>
#include <vector>
using namespace std;


void fibonacci(int, int, vector<int> &, int);
void print(const vector<int> &);

int main()
{
    cout << "positive int max number: " << __INT_MAX__ << '\n';
    int n1 = 0, n2 = 1;
    vector<int>v;
    //
        int n = 45; // 45 numbers is max
    //
    fibonacci(n1,n2,v,n);
    print(v);
    return 0;
}
void fibonacci(int n1, int n2, vector<int> &v, int n)
{
    int curr = 0;
    v.push_back(n1);
    v.push_back(n2);
    for (int i = 0; i <= n-1; i++)
    {
        curr = n1 + n2;
        n1 = n2;
        n2 = curr;
        v.push_back(curr);
    }
}

void print(const vector<int> &v)
{
    for (const auto& var : v)
    {
        cout << var << '\n';
    }
}