#include "Patron.h"
Patron::Patron()
{
    setFee();
    setUsername();
    setLibCardNum();

    getFee();
    getUsername();
    getLibCardNum();
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
void Patron::getFee() // fee number if there is any
{
    if (isFee())
    {
        cout << "Your library fee: " << libFee << '\n';
    }
    else
    {
        cout << "You have no fee's\n";
    }
}
void Patron::setUsername() // set username
{
    cout << "\nEnter Username: ";
    cin >> username;
}
void Patron::getUsername() // return username
{
    cout << "Your username: " << username << '\n';
}
void Patron::setLibCardNum() // set libcardnum
{
    cout << "\nEnter Library Card Number: ";
    cin >> libCardNum;
}
void Patron::getLibCardNum() // return libcardnum as int
{
    cout << "Your library card number: " << libCardNum << '\n';
}