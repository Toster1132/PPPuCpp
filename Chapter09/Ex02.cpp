#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Pairs
{
public:
    void enterName();
    void enterAge();
    void sortA();
    void sortZ();
    void print() const;

private:
    struct AgeName
    {
        string name = 0;
        double age = 0; // age need to be positive tho
    };
    vector<AgeName> v;
};

int main()
{
    // lil different from excersise but it is actually better.
    Pairs p;
    try
    {
        p.enterName();
        p.enterAge();
        p.sortA();
        // p.sortZ();
        p.print();
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
void Pairs::print() const
{
    cout << "Printing results\n";
    for (const auto &var : v)
    {
        cout << var.name << " " << var.age << '\n';
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