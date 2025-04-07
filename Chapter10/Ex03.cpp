#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

class cTemps
{
public:
    cTemps();
    void readTemps();
    void sorting();
    double meanT();
    double medianT();
    void printMM();
private:

    vector<double> v;
};

int main()
{
    cTemps ct;
    
    return 0;
}
cTemps::cTemps()
{
    readTemps();
    sorting();
    meanT();
    medianT();
    printMM();
}
void cTemps::readTemps()
{
    string name;
    cin >> name;
    ifstream ist(name);
    if(!ist) throw runtime_error("File couldnt be accessed");
    int x = 0;
    double y = 0;
    while(ist >> x >> y) // x will always be just thing to be cleared :/
    {
        v.push_back(y);
    }
}
void cTemps::sorting()
{
    sort(v.begin(),v.end());
}
double cTemps::meanT()
{
    double temp = 0;
    for(auto var: v)
    {
        temp += var;
    }
    return temp/v.size();
}
double cTemps::medianT()
{
    if(v.size() % 2 == 0)
    {
        return (v[v.size()/2]+v[v.size()/2-1])/2;
    }
    else
    {
        return v[v.size()/2];
    }
}
void cTemps::printMM()
{
    cout << "The mean: " << meanT() << '\n';
    cout << "The median: " << medianT() << '\n';
}