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
    
    delete tempS, tempI;

    for (int i = 0; i < scores.size(); i++)
    {
        cout << names[i] << " == " << scores[i] << '\n';
    }

    return 0;
}