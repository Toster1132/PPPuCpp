#include "Book.h"
#include "Patron.h"
int main()
{
    try
    {
        Book book0;
        Book book1;

        if (book0 == book1)
        {
            cout << "ISBN numbers are the same, bad as I assume\n";
        }
        else if (book0 != book1)
        {
            cout << "ISBN numbers are NOT the same, great\n";
        }

        cout << book0 << '\n';
        cout << book1 << '\n';

        Patron p;
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}