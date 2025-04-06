#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    try
    {
        string fileName = "file.txt";
        string fileName2 = "file2.txt";

        ifstream ist{fileName};
        if (!ist)
            throw runtime_error("Cant open file #1");
        vector<int> v;
        int temp = 0;
        if (ist.is_open())
        {
            while (ist >> temp)
            {
                v.push_back(temp);
            }
        }
        ist.close();

        ifstream ist2{fileName2};
        if (!ist2)
            throw runtime_error("Cant open file #2");
        if (ist2.is_open())
        {
            while (ist2 >> temp)
            {
                v.push_back(temp);
            }
        }
        ist2.close();

        sort(v.begin(), v.end());

        string output = fileName + "_" + fileName2;
        ofstream ost{output};
        if (ost.is_open())
        {
            for (int i = 0; i < v.size(); i++)
            {
                ost << v[i] << " ";
            }
        }
        return 0;
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }
}