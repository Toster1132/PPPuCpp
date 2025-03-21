#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int);
void primeIn(vector<int> &);
void primeOut(const vector<int>);

int main()
{
    vector<int> nums;
    cout << "All prime numbers between 1 and 100: \n";

    primeIn(nums);
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
void primeIn(vector<int> &primes)
{
    for (int i = 2; i <= 100; i++)
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