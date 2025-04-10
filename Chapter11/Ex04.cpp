#include <iostream>
#include <vector>
using namespace std;

class mulitInput
{
public:
    void getInput();
    void convert();
    void output();
    mulitInput();

private:
    int times = 0;
    struct pairs
    {
        string value;
        string type;
        int decimal = 0;
    };
    string input;
    vector<pairs> v;
};
int main()
{
    mulitInput mI;
    return 0;
}

mulitInput::mulitInput()
{
    getInput();
    output();
}
void mulitInput::getInput()
{
    cout << "Enter number of times i should prompt you: ";

    cin >> times;
    if (times < 1)
        throw runtime_error("negative number of ints");
    convert();
}
void mulitInput::convert()
{
    for (int i = 0; i < times; i++)
    {
        cin >> input;
        if (input[0] == '0')
        {
            if (input[1] == 'x') // hex
            {
                for (int i = 2; i < input.size(); i++)
                {
                    if (!isdigit(input[i]))
                        throw runtime_error("bad input");
                }
                v.push_back({input, "hex", stoi(input, nullptr, 16)});
            }
            else // octal
            {
                for (int i = 0; i < input.size(); i++)
                {
                    if (!isdigit(input[i]))
                        throw runtime_error("bad input");
                }
                v.push_back({input, "octal", stoi(input, nullptr, 8)});
            }
        }
        else // dec
        {
            for (int i = 0; i < input.size(); i++)
            {
                if (!isdigit(input[i]))
                    throw runtime_error("bad input");
            }
            v.push_back({input, "decimal", stoi(input)});
        }
    }
}
void mulitInput::output()
{
    for (const auto &temp : v)
    {
        cout << temp.value << ' ' << temp.type << '\t' << "converts to" << '\t' << temp.decimal << " decimal" << '\n';
    }
}