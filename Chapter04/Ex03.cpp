#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<double>distance;
    // for(double t ; cin>> t;)
    //{
    //  distance.push_back(t);
    //}

    vector<double> distance = {2.2, 36.4, 22, 12.4, 34.12};

    double sumOf = 0;
    for (int i = 0; i < distance.size(); i++)
    {
        sumOf += distance[i];
    }
    cout << "Sum of all given distances: " << sumOf << " km\n";

    sort(distance.begin(), distance.end());
    cout << "The smallest distance between cities: " << distance[0] << " km\n";
    cout << "The greatest distance between cities: " << distance[distance.size()-1] << " km\n";

    cout << "The mean distance between cities: " << sumOf / distance.size() << " km\n";

    return 0;
}