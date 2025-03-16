#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int);
void primeIn(vector<int> &, int);
void primeOut(const vector<int>);

int main()
{
    //
    // Modified Ex12
    //
    vector<int> nums;
    cout << "Printing n prime numbers, type in 'n': \n";
    int userInput = 0;
    cin >> userInput;
    primeIn(nums, userInput);
    primeOut(nums);
    return 0;
}
bool isPrime(int p)
{
    if (p < 2)
        return false;
    if (p == 2)
        return true;
    if (p % 2 == 0)
        return false;
    for (int i = 3; (i * i) <= p; i += 2)
    {
        if (p % i == 0)
            return false;
    }
    return true;
}
void primeIn(vector<int> &primes, int max)
{
    int cnt = 0;
    for (int i = 2; i != -1; i++)
    {
        if (cnt == max)
            break;
        if (isPrime(i) == true)
        {
            primes.push_back(i);
            cnt++;
        }
    }
}
void primeOut(const vector<int> primes)
{
    for (int i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << '\n';
    }
}