#include <iostream>
#include <vector>
using namespace std;

int invalidInput(int);

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> digits = {3, 4, 6, 5};
    cout << "Bulls and Cows game enter <0-9> 4 times\n";
    int input1 = 0, input2 = 0, input3 = 0, input4 = 0;
    char prompt = 'y';
    while (prompt = 'y')
    {
        try
        {
            cin >> input1 >> input2 >> input3 >> input4;
            if (input1 < 0 || input1 > 9)
                throw invalidInput(input1);
            if (input2 < 0 || input2 > 9)
                throw invalidInput(input2);
            if (input3 < 0 || input3 > 9)
                throw invalidInput(input3);
            if (input4 < 0 || input4 > 9)
                throw invalidInput(input4);
        }
        catch (int invalidInput)
        {
            cerr << "Invalid input: " << invalidInput << '\n';
            return -1;
            // You need to eliminate 1st error so then other can be printed
        }
        int cow = 0, bull = 0;
        //
        // can do with two nested for loops and vector
        // will do it in next Ex.
        //
        for (int i = 0; i < 4; i++)
        {
            if (input1 == digits[0])
            {
                bull++;
                break;
            }
            else if (input1 == digits[i])
            {
                cow++;
                break;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (input2 == digits[1])
            {
                bull++;
                break;
            }
            else if (input2 == digits[i])
            {
                cow++;
                break;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (input3 == digits[2])
            {
                bull++;
                break;
            }
            else if (input3 == digits[i])
            {
                cow++;
                break;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (input4 == digits[3])
            {
                bull++;
                break;
            }
            else if (input4 == digits[i])
            {
                cow++;
                break;
            }
        }
        if (bull == 4)
        {
            cout << "You won!\n";
        }
        else
        {
            cout << "nice try, Bulls: " << bull << " and cows: " << cow << '\n' << "wanna play again? y/n \n";
            cin >> prompt;
            if(prompt == 'n') return 0;
        }
    }
    return 0;
}

int invalidInput(int input)
{
    return input;
}