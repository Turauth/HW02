// Allow the use of std::string (https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/).
#include <string>

// Enable this file to read or write to the standard input/output streams and use the std namespace (https://stackoverflow.com/questions/22645097/what-does-include-iostream-do; 
// https://stackoverflow.com/questions/18914106/what-is-the-use-of-using-namespace-std).
#include <iostream>

#include "person.h"

// Implement the getter and setter functions for first and last names 
// (slides; https://www.learncpp.com/cpp-tutorial/classes-and-header-files/).
void Person::setFirstName(std::string input)
{
    m_firstName = input;
}

std::string Person::getFirstName()
{
    return m_firstName;
}
    
void Person::setLastName(std::string input)
{
    m_lastName = input;
}

std::string Person::getLastName()
{
    return m_lastName;
}

// Implement the Person constructor.
Person::Person(Date startDate, std::string firstName, std::string lastName)
    : m_startDate{ startDate }
    , m_firstName{ firstName }
    , m_lastName{ lastName }
{
}