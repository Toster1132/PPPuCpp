#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    try
    {
        vector<int> v;
        string input = " ";
        int max = 0, inputS = 0, sum = 0;
        cout << "First enter amount of numbers vector should sum, and then enter the numbers:\n";
        cin >> max;
        for (int i = 0;; i++)
        {
            cin >> input;
            if (input == "|")
                break;
            inputS = stoi(input);
            v.push_back(inputS);
        }
        for (int i = 0; i < max; i++)
        {
            sum += v[i];
        }
        cout << sum << '\n';
        return 0;
    }
    catch (out_of_range)
    {
        cerr << "Out of range\n";
    }
    catch (...)
    {
        cerr << "Something else bad happened\n";
    }
}