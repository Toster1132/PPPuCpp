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
        char fahCel = ' ';
    };
    vector<temps> v;
};

int main()
{
    try
    {
        cTemps ct;
    }
    catch(const runtime_error& e)
    {
        cerr << e.what() << '\n';
    }
    
    
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
    char z = ' ';
    while(ist >> x >> y >> z)
    {
        if(z == 'f'){}
        else if(z == 'c')
        {
            y = (y*1.8)+32;
            if(y < -459.75) throw runtime_error("Bellow absolute zero");
            z = 'f';
        }
        else
        {
            throw runtime_error("Unknown char");
        }
        v.push_back(temps{x,y,z});
    }
}
void cTemps::print() const
{
    for(const auto& temp: v)
    {
        cout << temp.hour << " " << temp.temperature << temp.fahCel << '\n';
    }
}