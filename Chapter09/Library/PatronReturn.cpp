#include <iostream>
using namespace std;

class Patron
{
public:
    void setFee();      // set
    double getFee();    // use isFee() then return
    void setUsername(); // set
    string getUsername();
    void setLibCardNum(); // set
    int getLibCardNum();
    Patron();

private:
    bool isFee();       // fee is greater than 0 return yes
    string username;    // ur username
    int libCardNum = 0; // number of card
    double libFee = 0;  // library fee
};

int main()
{
    try
    {
        Patron p;
    }
    catch(const runtime_error& e)
    {
        cerr << e.what() << '\n';
    }
    
    return 0;
}
Patron::Patron()
{
    setFee();
    setUsername();
    setLibCardNum();
    cout << getFee() << " " << getUsername() << " " << getLibCardNum();
}
bool Patron::isFee() // check if there is fee
{
    if (libFee > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Patron::setFee() // set fee
{
    cout << "\nEnter fee: ";
    cin >> libFee;
}
double Patron::getFee() // return fee as double if there is a positive fee
{
    // the idea of isFee is not non-sense if i would print things on screen (Ex9 will do)
    if (isFee())
    {
        return libFee;
    }
    else
    {
        return 0;
    }
}
void Patron::setUsername() // set username
{
    cout << "\nEnter Username: ";
    cin >> username;
}
string Patron::getUsername() // return username
{
    return username;
}
void Patron::setLibCardNum() // set libcardnum
{
    cout << "\nEnter Library Card Number: ";
    cin >> libCardNum;
}
int Patron::getLibCardNum() // return libcardnum as int
{
    return libCardNum;
}