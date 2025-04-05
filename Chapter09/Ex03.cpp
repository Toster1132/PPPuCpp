#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Pairs
{
public:
    struct AgeName
    {
        string name;
        double age = 0; // age need to be positive tho
    };
    void enterName();
    void enterAge();
    void sortA();
    void sortZ();

    vector<AgeName> v;

    // bool operator!=(const Pairs::AgeName &an) const
    // {
    // }
    // bool operator==(const Pairs::AgeName &an) const
    // {
    // }
    //
    // no clue why do i need it and how it can be usefull
};
ostream &operator<<(ostream &os, const Pairs::AgeName &an)
// clever overload (ig)
{
    os << an.name << " " << an.age << " ";
    return os;
}

int main()
{
    // copy of Ex02 but with changes.
    Pairs p;
    try
    {
        p.enterName();
        p.enterAge();
        p.sortA();
        for (int i = 0; i < p.v.size(); i++)
        {
            cout << p.v[i] << '\n';
        }
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}

void Pairs::enterName()
{
    cout << "Stop the prompts by entering q or Q\n";
    string temp;
    while (cin >> temp)
    {
        if (temp == "q" || temp == "Q")
            break;
        v.push_back({temp, 0});
    }
    cin.clear();
    cin.ignore();
}
void Pairs::enterAge()
{
    if (v.empty())
        throw runtime_error("no names entered\n");
    cout << "now enter ages: \n";

    double temp = 0;
    for (size_t i = 0; i < v.size(); ++i)
    {
        cin >> temp;
        v[i].age = temp;
    }
}
void Pairs::sortA()
{
    sort(v.begin(), v.end(), [](const AgeName &a, const AgeName &b)
         { return a.name < b.name; });
}
void Pairs::sortZ()
{
    sort(v.begin(), v.end(), [](const AgeName &a, const AgeName &b)
         { return a.name > b.name; });
}