#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> rps = {'r', 'p', 's'};
    char userInput = ' ';
    int bot = 0, user = 0;

    for (int i = 0; i < rps.size(); i++)
    {
        cout << "Rock, Paper, Scissors: Enter r/p/s\n"
             << "Waiting for your move:\n";
        cin >> userInput;
        switch (userInput)
        {
        case 'r':
            if (rps[i] == 'r')
                cout << "Draw\n";
            if (rps[i] == 'p')
            {
                cout << "U lost\n";
                bot++;
            }
            if (rps[i] == 's')
            {
                cout << "U won\n";
                user++;
            }
            break;
        case 'p':
            if (rps[i] == 'p')
                cout << "Draw\n";
            if (rps[i] == 's')
            {
                cout << "U lost\n";
                bot++;
            }
            if (rps[i] == 'r')
            {
                cout << "U won\n";
                user++;
            }
            break;
        case 's':
            if (rps[i] == 's')
                cout << "Draw\n";
            if (rps[i] == 'r')
            {
                cout << "U lost\n";
                bot++;
            }
            if (rps[i] == 'p')
            {
                cout << "U won\n";
                user++;
            }
            break;
        default:
            cout << "Learn how to write, you fool\n";
            break;
        }
    }
    if (bot == user)
    {
        cout << "Draw! " << user << " : " << bot << '\n';
    }
    else if (user > bot)
    {
        cout << "U won! " << user << " : " << bot << '\n';
    }
    else
    {
        cout << "U lost! " << user << " : " << bot << '\n';
    }
    return 0;
}