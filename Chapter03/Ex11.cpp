#include <iostream>
using namespace std;

int main()
{
    cout << "How many Polish złoty do you have?\n";
    int p = 0, g = 0;
    cin >> p;
    cout << "How many Polish groszy do you have?\n";
    cin >> g;

    if(p < 5 && p > 1)
    {
        cout << "You have " << p << " złote"; 
    }
    else if(p == 0 || p > 4)
    {
        cout << "You have " << p << " złotych";
    }

    if(g < 5 && g > 1)
    {
        cout << " and " << g << " grosze\n"; 
    }
    else if(g == 0 || g > 4)
    {
        cout << " and " << g << " groszy\n";
    }


    return 0;
}