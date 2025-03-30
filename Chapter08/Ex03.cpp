#include <iostream>
#include <vector>
using namespace std;

void fibonacci(int, int, vector<int> &, int);
void print(const vector<int> &);

int main()
{
    try
    {
        cout << "Enter two values from which fibonacci-like sequence will start:\n";
        int num1 = 0, num2 = 0, n = 0;
        cin >> num1 >> num2;
        cout << "Now give number which will tell the program how much it needs to iterate throught the sequence(+ two numbers you provided).\n";
        cin >> n;
        cout << "---------------------\n";
        vector<int> v;
        fibonacci(num1, num2, v, n);
        print(v);
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

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