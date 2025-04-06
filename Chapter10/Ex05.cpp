#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//
//
//
//  To be continued.
//
//
const int not_a_reading = -7777; // magic constant but less than absolute zero
const int not_a_month = -1; // indeed not a month

void end_of_loop(istream&ist,char term,const string&mess)
{
    if(ist.fail())
    {
        ist.clear();
        char ch = ' ';
        if(ist>>ch && ch==term) return;
        throw runtime_error(mess);
    }
}

constexpr int implausible_min = -200;
constexpr int implausible_max = 200;

bool is_valid(const Reading&r)
{
    if(r.day<1 || 31< r.day) return false;
    if(r.hour<0 || 23<r.hour) return false;
    if(r.temperature<implausible_min|| implausible_max < r.temperature) return false;
    return true;
}

struct Day
{
    vector<double> hour{vector<double>(24,not_a_reading)};
};

struct Month
{
    int month = not_a_month;
    vector<Day>day{32};
};

struct Year
{
    int year = 0;
    vector<Month>month{12};
};

struct Reading
{
    int day = 0;
    int hour = 0;
    double temperature = 0;
};

istream& operator<<(istream& is,Reading& r)
{
    char ch1 = ' ';
    if(is>>ch1 && ch1!='(')
    {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    char ch2 = ' ';
    int d = 0;
    int h = 0;
    double t = 0;
    is >> d >> h >> t >> ch2;
    if(!is || ch2!=')') throw runtime_error("baaaaad read!");
    r.day = d;
    r.hour = h;
    r.temperature = t;
    return is;
}
istream& operator<<(istream&is,Month&m)
{
    char ch = 0;
    if(is >> ch && ch != '{')
    {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }
    string month_marker;
    string mm;
    is >> month_marker >> mm;
    if(!is || month_marker != "month") throw runtime_error("bad start");
    m.month = month_to_int(mm);
    int duplicates = 0;
    int invalids = 0;
    for(Reading r; is >> r;)
    {
        if(is_valid(r))
        {
            if(m.day[r.day].hour[r.hour] != not_a_reading)
            ++duplicates;
            m.day[r.day].hour[r.hour] = r.temperature;
        }
        else
        {
            ++invalids;
        }
    }
    if(invalids) throw runtime_error("invalind reading in month"+ invalids);
    if(duplicates) throw runtime_error("duplicate readins in month"+ duplicates);
    end_of_loop(is,'}',"bad end of month");
    return is;
}
istream & operator>>(istream&is,Year&y)
{
    char ch = ' ';
    is >> ch;
    if(ch!= '{')
    {
        is.unget();
        is.clear(ios::failbit);
        return is;
    }
    string year_marker;
    int yy = 0;
    is >> year_marker >> yy;
    if(!is||year_marker != "year") throw runtime_error("bad start of y");
    y.year = yy;

    while (true)
    {
        Month m;
        if(!(is>>m))break;
        y.month[m.month] = m;
    }
    end_of_loop(is,'}',"bad end of y");
    return is;
}

int main()
{
    try
    {

    }
    catch(const runtime_error& e)
    {
        cerr << e.what() << '\n';
    }
    
    return 0;
}