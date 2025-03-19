#include <iostream>
using namespace std;

void fib();

int main()
{
    fib();
    return 0;
}

void fib()
{
    int beg = 1,end = 1, curr = 0;
    cout << 0 << ' ' << 1 << ' ' << 1 << ' ';
    while (true)
    {
        curr = beg + end;
        if(curr < 0) break;
        // in that case it works
        cout << curr << " ";
        beg = end;
        end = curr;
    }
}