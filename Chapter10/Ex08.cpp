#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    try
    {
        cout << "Enter the names of two files to concatenade 'em\n";
        cout << "first one: ";
        string fileName;
        cin >> fileName;
        cout << "\nsecond one: ";
        string fileName2;
        cin >> fileName2;

        ifstream ist{fileName};
        if (!ist)
            throw runtime_error("Cant open file #1");

        string output = fileName + "_" + fileName2;
        ofstream ost{output};

        if (ist.is_open() && ost.is_open())
        {
            string line;

            while (getline(ist, line))
            {
                ost << line << "\n";
            }
        }
        ist.close();

        ifstream ist2{fileName2};
        if (!ist2)
            throw runtime_error("Cant open file #2");
        if (ist2.is_open() && ost.is_open())
        {
            string line;

            while (getline(ist2, line))
            {
                ost << line << "\n";
            }
        }
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}