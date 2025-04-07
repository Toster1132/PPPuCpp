#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class cTemps
{
public:
    cTemps();
    void readTemps();
    void print() const;
private:
    struct temps
    {
        int hour = 0;
        double temperature = 0;
    };
    vector<temps> v;
};

int main()
{
    cTemps ct;
    
    return 0;
}
cTemps::cTemps()
{
    readTemps();
    print();
}
void cTemps::readTemps()
{
    string name;
    cin >> name;
    ifstream ist(name);
    if(!ist) throw runtime_error("File couldnt be accessed");
    int x = 0;
    double y = 0;
    while(ist >> x >> y)
    {
        v.push_back(temps{x,y});
    }
}
void cTemps::print() const
{
    for(const auto& temp: v)
    {
        cout << temp.hour << " " << temp.temperature << '\n';
    }
}