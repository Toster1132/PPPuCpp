#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vectorIn(vector<int> &);
void mode(vector<int>);

int main()
{
    //
    // dont work yet lolz
    //
    cout << "Enter the int's - get the mode! \n";
    vector<int> vec;
    vectorIn(vec);
    mode(vec);
    return 0;
}

void vectorIn(vector<int> &v)
{
    for (int temp; cin >> temp;)
    {
        v.push_back(temp);
    }
}

void mode(vector<int> v)
{
    sort(v.begin(), v.end());

    int num = v[0];
    int mode = num;
    int count = 1;
    int countMode = 1;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == num)
        {
            count++;
        }
        else
        {
            if (count > countMode)
            {
                countMode = count;
                mode = num;
            }
            count = 1;
            num = v[i];
        }
    }

    cout << "mode : " << mode << '\n';
}