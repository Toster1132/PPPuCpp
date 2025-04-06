#include "Book.h"
//
// ostream &operator<<(ostream &os, const Book &B)
// {
//     os << " | ISBN number: " << B.d.isbn << " | Book Title: " << B.d.title << " | Book author: " << B.d.author << " | Copyright date: " << B.d.copyrightDate << " | Is checked?: " << B.d.check << " | Genre: " << B.getGenre();
//     return os;
// }
// bool operator==(const Book &b1, const Book &b2)
// {
//     return b2.d.isbn == b1.d.isbn;
// }
// bool operator!=(const Book &b1, const Book &b2)
// {
//     return b2.d.isbn != b1.d.isbn;
// }

string Book::getGenre() const
{
    switch (static_cast<int>(g))
    {
    case 1:
        return "Fiction";
    case 2:
        return "Nonfiction";
    case 3:
        return "Periodical";
    case 4:
        return "Biography";
    case 5:
        return "Children";
    default:
        return "Unknown Genre";
    }
}
void Book::setGenre()
{
    cout << "Choose genre: \n"
         << "1 - Fiction | 2 - Nonfiction | 3 - Periodical | 4 - Biography | 5 - Children\n";
    int gInput = 0;
    cin >> gInput;
    g = static_cast<Genre>(gInput);
}
void Book::setCheck()
{
    cout << "Do you want to check the book? enter 'y' or 'n'\n";
    cin >> d.check;
}
bool Book::getCheck() const
{
    switch (d.check)
    {
    case 'y':
        return true;
        break;
    case 'n':
        return false;
        break;
    default:
        throw runtime_error("Unknown character\n");
        break;
    }
}
void Book::setIsbn()
{
    cout << "enter ISBN (nnnx : n=int - x=digit/letter): \n";
    cin >> d.isbn;
    if (d.isbn.length() != 4)
        throw runtime_error("Invalid length of ISBN\n");
    if (!isdigit(d.isbn[0]) || !isdigit(d.isbn[1]) || !isdigit(d.isbn[2]))
        throw runtime_error("Invalid ISBN, 1st;2nd or 3th symbol\n");
    if (!(isalpha(d.isbn[3]) || isdigit(d.isbn[3])))
        throw runtime_error("Invalid ISBN, 4th symbol");

    cout << "valid!\n";
}
string Book::getIsbn() const
{
    return d.isbn;
}
void Book::setTitle()
{
    cout << "Enter book title: \n";
    cin.ignore();
    getline(cin, d.title);
}
string Book::getTitle() const
{
    return d.title;
}
void Book::setAuthor()
{
    cout << "enter book author: \n";
    cin.ignore();
    getline(cin, d.author);
}
string Book::getAuthor() const
{
    return d.author;
}
void Book::setCpD()
{
    cout << "enter copyright date: \n";
    cin.ignore();
    getline(cin, d.copyrightDate);
}
string Book::getCpD() const
{
    return d.copyrightDate;
}