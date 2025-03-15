#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Enter value from 0 to 9 using digit or word\n";

    string getV = "";
    cin >> getV;

    if (getV >= "0" && getV <= "9")
    {
        int getVI = stoi(getV);
        cout << v[getVI] << '\n';
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == getV)
                cout << i << '\n';
        }
    }
    return 0;
}