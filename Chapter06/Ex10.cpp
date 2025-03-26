#include <iostream>
using namespace std;

long long unsigned int factorial(int);
long long unsigned int perm(int, int);
long long unsigned int comb(int, int);

int main()
{
    int x = 0, y = 0;
    char pc = ' ';
    try
    {
        cout << "Enter two numbers and then choose permutation or combination. [12 is max number! due to obvious limits :< [p/c]\n";
        cin >> x >> y;
        if (x < 0 || x > 12)
            throw runtime_error("x should be postive and x should be less than 12");
        if (y < 0 || y > x)
            throw runtime_error("y should be positive and x should be bigger than y");
        cout << "Choose what should i do with those!? [p/c]\n";
        cin >> pc;
        if (pc == 'p' || pc == 'c')
        {
        }
        else
        {
            throw runtime_error("U cant write lolz");
        }
        switch (pc)
        {
        case 'c':
        case 'C':
            cout << "Combination of those is == " << comb(x, y) << '\n';
            break;
        case 'p':
        case 'P':
            cout << "Permutation of those is == " << perm(x, y) << '\n';
            break;
        default:
            break;
        }
    }
    catch(const runtime_error& e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}

long long unsigned int factorial(int z)
{
    if (z == 1)
    {
        return z;
    }
    else
    {
        int fact = 1;
        for (int i = 2; i <= z; i++)
            fact *= i;
        return fact;
    }
}
long long unsigned int perm(int a, int b)
{
    return factorial(a) / factorial(a - b);
}
long long unsigned int comb(int a, int b)
{
    return perm(a, b) / factorial(b);
}