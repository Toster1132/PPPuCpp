#include <iostream>
#include <vector>
using namespace std;

void print_until_s(const vector<string>&, string);
void print_until_ss(const vector<string>&, string);


int main()
{
    string terminate = "Q";
    vector<string>v = {"pig","terrain","Q","eagle","Q","carrot"};
    // print_until_s(v,terminate);
    print_until_ss(v,terminate);
    return 0;
}

void print_until_s(const vector<string>& v, string quit)
{
    for(const auto& s:v)
    {
        if(s == quit) return;
        cout << s << '\n';
    }
}
void print_until_ss(const vector<string>& v, string quit)
{
    int temp = 0;
    for(const auto& s:v)
    {
        if(s == quit)
        {
            temp++;
            continue;
        }
        if(temp >1) return;
        cout << s << '\n';
    }
}
