#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Search
{
public:
    void getFileOpen(); // and push back
    void output();
    Search();

private:
    vector<string> v;
    string word;
    string name;
};

int main()
{
    try
    {
        Search s;
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}
Search::Search()
{
    getFileOpen();
    output();
}
void Search::getFileOpen()
{
    cout << "enter name of a file: ";
    cin >> name;
    cout << "enter word to search for: ";
    cin >> word;

    ifstream ist(name);
    if (!ist)
        throw runtime_error("cant open file");

    string temp;
    while (getline(ist,temp))
    {
        if(temp.find(word) != string::npos) // if there is word anywhere in the line
        {
            v.push_back(temp);
        }
    }
    ist.close();
}
void Search::output()
{
    for(const string& i:v)
    {
        cout << i << '\n';
    }
}