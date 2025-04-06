#include "Library.h"
int main()
{
    try
    {
        // Patron p;
        // if (book0 == book1)
        // {
        //     cout << "ISBN numbers are the same, bad as I assume\n";
        // }
        // else if (book0 != book1)
        // {
        //     cout << "ISBN numbers are NOT the same, great\n";
        // }
        // cout << book0 << '\n';
        // cout << book1 << '\n';

        while (true)
        {
            Library lib;
            cout << "Want to add books? \n";
            char input = ' ';
            cin >> input;
            if (input == 'n')
            {
                cout << "Checking-out? \n";

                char input2 = ' ';
                cin >> input2;
                if (input2 == 'y')
                {
                    lib.checkOutBooks();
                    break;
                }
                else if (input2 == 'n')
                {
                    break;
                }
                else
                {
                    throw runtime_error("Unknown character");
                }
            }
            else if (input == 'y')
            {
                Book book;
                book.setIsbn();
                book.setTitle();
                book.setAuthor();
                book.setCpD();
                book.setCheck();
                Patron patron;
                patron.setFee();
                patron.setUsername();
                patron.setLibCardNum();
            }
            else
            {
                throw runtime_error("Unknown character");
            }
        }

        return 0;
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << '\n';
    }
}