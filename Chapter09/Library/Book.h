#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    void setIsbn();
    string getIsbn() const;

    void setTitle();
    string getTitle() const;

    void setAuthor();
    string getAuthor() const;

    void setCpD();
    string getCpD() const;

    void setCheck();
    bool getCheck() const;

    void setGenre();
    string getGenre() const;

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