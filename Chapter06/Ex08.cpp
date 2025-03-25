#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>
using namespace std;
//
//  It's ex13 not ex12 because unspoken things were done in ex12
//
int invalidInput(int);
int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> digits;
    vector<char> tempC;
    vector<int> convertedTemp;
    char userInput[4];
    cout << "Bulls and Cows game enter <0-9> 4 times\n";
    //
    //  In case of digits = 9082
    //  when input is 9000
    //  the program will output 2bulls 2cows.
    //
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

    while (true)
    {
        try
        {
          tempC.clear();
          convertedTemp.clear();
          cin >> userInput;
          for(int i = 0; i<4;i++)
          {
            tempC.push_back(userInput[i]);
          }
          convertedTemp.clear();
          transform(begin(tempC), end(tempC), back_inserter(convertedTemp), [](char c) { return c - '0'; });
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
                if (convertedTemp[j] == digits[j])
                {
                    bull++;
                    break;
                }
                else if (convertedTemp[i] == digits[i])
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
              //
              // no check of bad input (y/n)
              // 
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
