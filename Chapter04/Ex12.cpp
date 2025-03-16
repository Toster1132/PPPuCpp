#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int);
void primeIn(vector<int> &,int);
void primeOut(const vector<int>);

int main()
{
    //
    // Modified Ex11
    //
    vector<int> nums;
    cout << "Outputting prime numbers beetween 1 and your input: \n";
    int userInput = 0;
    cin >> userInput;
    primeIn(nums,userInput);
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
void primeIn(vector<int> &primes,int max)
{
    for (int i = 2; i <= max; i++)
    {
        if (isPrime(i) == true)
        {
            primes.push_back(i);
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