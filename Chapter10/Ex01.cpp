#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class File
{
public:
    void enterFromFile();
    int sumUp();
    void print();

private:
    vector<int> v;
    int sum = 0;
};

int main()
{
    try
    {
        File f;
        f.enterFromFile();
        f.sumUp();
        f.print();
    }
    catch(const runtime_error& e)
    {
        cerr << e.what() << '\n';
    }
    
    return 0;
}
void File::enterFromFile()
{
    // from this ONE file
    ifstream ist{"file.txt"};
    if (!ist)
        throw runtime_error("Cant open file");
    int x = 0;
    while (ist >> x)
        v.push_back(x);
}
int File::sumUp()
{
    for(auto & temp : v)
    {
        sum += temp;
    }
    return sum;
}
void File::print()
{
    cout << "Sum of those == " << sum << '\n';
}