#include <iostream>
using namespace std;

int main()
{
    int whichSq = 0, grainOnSq = 0, sumSq = 0;

    // "64 squares" version
    for(int i = 1; i<=64;i++)
    {
        whichSq++;
        grainOnSq = i*i;
        sumSq += grainOnSq;
        cout << "#" << whichSq << " | Grains on square: " << grainOnSq << " | Sum overall: " << sumSq << '\n';
    }

    return 0;
}