#include <iostream>
using namespace std;

int main()
{
    cout << "Type in operation followed by two operands, (div,mul,plus,minus) \n";
    char oper = '0';
    double x = 0,y = 0;

    if(oper == '*' || oper == 'x' || oper == 'X')
    {
        cout << x*y <<'\n';
    }
    else if(oper == '+')
    {
        cout << x+y << '\n';
    }
    else if(oper == '-')
    {
        cout << x - y << '\n';
    }
    else if(oper == ':')
    {
        cout << x/y << '\n';
    }
    else
    {
        cout << "Something's wrong\n";
    }

    return 0;
}