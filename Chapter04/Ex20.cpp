#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names;
    vector<int> scores;

    string *tempS = nullptr;
    tempS = new string;

    int *tempI = new int;

    cout << "Enter name and score of a user:\n"
         << "Terminate the loop with \"NoName\" as 1st option and \"0\" as second\n";

    for (int i = 0;; i++)
    {
        cin >> *tempS;
        names.push_back(*tempS);
        cin >> *tempI;
        scores.push_back(*tempI);

        if (*tempS == "NoName" && *tempI == 0)
            break;
    }

    delete tempI;

    cout << "Cancel loop criteria are the same BUT enter only name\n"
         << "Enter name and get score:\n";
    for (int i = 0;; i++)
    {
        cin >> *tempS;
        if (*tempS == "NoName")
            break;

        for (int i = 0;; i++)
        {
            if (*tempS == names[i])
            {
                cout << scores[i] << '\n';
                break;
            }
            else if (i > scores.size())
            {
                cout << "Name not found\n";
                break;
            }
        }
    }

    delete tempS;
    return 0;
}