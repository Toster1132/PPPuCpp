#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
class Ex01
{
public:
    void readFileAndLower();
    void writeFile();
private:
    vector<char>v;
};

int main()
{
    Ex01 e;
    e.readFileAndLower();
    e.writeFile();

    return 0;
}

void Ex01::readFileAndLower()
{
    string name;
    cin >> name;
    ifstream ist(name);
    if(!ist) throw runtime_error("cant open file");
    char c = ' ';
    while(ist >> c) //  do while??
    {
        c = tolower(c);
        v.push_back(c);
    }
    ist.close();

}
void Ex01::writeFile()
{
    ofstream ost ("ex01_OUTPUT.txt");
    if(!ost) throw runtime_error("cant write lol");
    for(const char& c : v)
    {
        ost << c;
    }
    ost.close();
    
}