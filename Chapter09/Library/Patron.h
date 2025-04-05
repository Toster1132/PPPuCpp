#include <iostream>
#include <string>
using namespace std;
class Patron
{
public:
    void setFee();      // set
    void getFee();    // use isFee() then print
    void setUsername(); // set
    void getUsername();
    void setLibCardNum(); // set
    void getLibCardNum();
    Patron();

private:
    bool isFee();       // fee is greater than 0 return yes
    string username;    // ur username
    int libCardNum = 0; // number of card
    double libFee = 0;  // library fee
};