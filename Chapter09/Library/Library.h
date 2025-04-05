#include "Book.h"
#include "Patron.h"
// #include "Date.h"
#include <iostream>
#include <vector>
using namespace std;

class Library
{
public:
    Library();
    void addBooks();
    void addPatrons();
    void checkOutBooks();
    void libConstructor();
private:
    struct Transaction
    {
        Book book;
        Patron patron;
        // Date
    };
    Transaction trans;
    vector<Transaction> v;
};
