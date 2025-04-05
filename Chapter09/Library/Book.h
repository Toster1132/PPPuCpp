#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    void setIsbn();
    void setTitle();
    void setAuthor();
    void setCpD();
    void getCheck();
    void setGenre();
    string getGenre()const;

    friend ostream &operator<<(ostream &os, const Book &d);
    friend bool operator==(const Book &, const Book &);
    friend bool operator!=(const Book &, const Book &);

    Book();

private:
    enum class Genre
    {
        Fiction = 1,
        Nonfiction,
        Periodical,
        Biography,
        Children
    };
    Genre g;
    bool checkingBook(const char &);
    struct data
    {
        string isbn;
        string title;
        string author;
        string copyrightDate;
        char check = ' ';
    };
    data d;
};