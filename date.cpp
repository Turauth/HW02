#include "date.h"

// Define the implementation of the default constructor for the Date class. The constructor sets the date
// to January 1, 1970 (https://www.learncpp.com/cpp-tutorial/classes-and-header-files/).
Date::Date()
    : m_month{ 1 }
    , m_day{ 1 }
    , m_year{ 1970 }
{
}


// Define the implementation of the specific constructor, which will be used to manually set the date at the time of object creation
// (https://www.learncpp.com/cpp-tutorial/default-constructors-and-default-arguments/).
Date::Date(int month, int day, int year)
    : m_month{ month }
    , m_day{ day }
    , m_year{ year }
{
}

// Define the implementation of the overloading of the output stream operator (<<) 
// (https://stackoverflow.com/questions/47083328/operator-overloading-in-header-files-and-in-the-cpp-files).
std::ostream& operator<<(std::ostream& os, const Date& dt)
{
    os << dt.m_month << "/" << dt.m_day << "/" << dt.m_year;
    return os;
}