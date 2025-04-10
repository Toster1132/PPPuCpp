#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class vowelRemove // a e i o u y
{
public:
    void ifFile();
    void ofFile();
    vowelRemove();

private:
    vector<char> v;
    string temp;
    string name;
};

int main()
{
    try
    {
        vowelRemove vl;
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}
vowelRemove::vowelRemove()
{
    ifFile();
    ofFile();
}
void vowelRemove::ifFile()
{
    cout << "Enter name of file: ";
    cin >> name;
    ifstream ist(name);
    if (!ist)
        throw runtime_error("cant open file " + name);
    while (getline(ist, temp))
    {
        for (char character : temp)
        {
            switch (character)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'Y':
                break; // do nothing
            default:
                v.push_back(character);
                break;
            }
        }
    }
    ist.close();
}

void vowelRemove::ofFile()
{
    ofstream ost(name);
    if (!ost)
        throw runtime_error("cant open file " + name);
    for (int i = 0; i < v.size(); i++)
    {
        ost << v[i];
    }
    ost.close();
}