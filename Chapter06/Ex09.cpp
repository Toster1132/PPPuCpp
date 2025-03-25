#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> intV;
    cout << "Enter up to 4 digit long number :3\n";
    string input;
    cin >> input;

    if (input.size() > 4) return -1;

    for (char ch : input)
    {
        int temp = (isdigit(ch)) ? ch - '0' : 0;
        intV.push_back(temp);
    }

    while (intV.size() < 4) {
        intV.insert(intV.begin(), 0);
    }

    vector<string>multipliers = { "thousand", "hundreds", "tens", "ones" };
    for (int i = 0; i < 4; i++) {
        if(intV[i] == 0) continue;
        cout << intV[i] << " " << multipliers[i] << "\n";
    }
    return 0;
}
