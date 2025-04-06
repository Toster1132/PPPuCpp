#include "Patron.h"
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