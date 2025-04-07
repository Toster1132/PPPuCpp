#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

class Oper
{
public:
    int sum();
    void print();
    void getFile();
    Oper();

private:
    vector<int> v;
};

void Oper::getFile()
{
    string name;
    cin >> name;
    ifstream ist{name};
    if (!ist)
        throw runtime_error("Cant read file");

    string line;
    while (getline(ist, line)) // get whole line
    {
        stringstream ss(line);
        string word;
        while (ss >> word) // process word by word
        {
            try
            {
                size_t pos;
                int num = stoi(word, &pos);
                if (pos > 0)
                {
                    v.push_back(num);
                }
            }
            catch (...)
            {
            } // skip unnecessary stuff
        }
    }

    ist.close();
}
int Oper::sum()
{
    int val2 = 0;
    for (int i : v)
    {
        val2 += i;
    }
    return val2;
}
void Oper::print()
{
    cout << "Sum of those: " << sum() << '\n';
}
Oper::Oper()
{
    getFile();
    print();
}
int main()
{
    try
    {
        Oper p;
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}