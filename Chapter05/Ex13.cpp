#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

int invalidInput(int);

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> digits;
    vector<int> userInput;
    cout << "Bulls and Cows game enter <0-9> 4 times\n";
    int input;
    char prompt = 'y';

    srand(time(0));

    int random = 0;
    for (int i = 0; i < 4; i++)
    {
        // getting random digits
        random = rand() % 10;
        cout << random << '\n';
        digits.push_back(random);
    }

    while (prompt = 'y')
    {
        try
        {
            userInput.clear();
            for (int i = 0; i < 4; i++)
            {
                cin >> input;
                if (input < 0 || input > 9)
                    throw invalidInput(input);
                userInput.push_back(input);
            }
        }
        catch (int invalidInput)
        {
            cerr << "Invalid input: " << invalidInput << '\n';
            return -1;
            // You need to eliminate 1st error so then other can be printed
        }
        int cow = 0, bull = 0;

        for (int j = 0; j < 4; j++)
        {
            for (int i = 0; i < 4; i++)
            {
                if (userInput[j] == digits[j])
                {
                    bull++;
                    break;
                }
                else if (userInput[j] == digits[i])
                {
                    cow++;
                    break;
                }
            }
        }
        if (bull == 4)
        {
            cout << "You won!\n";
            return 0;
        }
        else
        {
            cout << "nice try, Bulls: " << bull << " and cows: " << cow << '\n'
                 << "wanna try again? y/n \n";
            bull = 0;
            cow = 0;
            cin >> prompt;
            if (prompt == 'n')
                return 0;
        }
    }
}

int invalidInput(int input)
{
    return input;
}