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

private:
    bool isFee();       // fee is greater than 0 return yes
    string username;    // ur username
    int libCardNum = 0; // number of card
    double libFee = 0;  // library fee
};