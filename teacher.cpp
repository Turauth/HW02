// Allow the use of std::string (https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/).
#include <string>

// Enable this file to read or write to the standard input/output streams and use the std namespace (https://stackoverflow.com/questions/22645097/what-does-include-iostream-do; 
// https://stackoverflow.com/questions/18914106/what-is-the-use-of-using-namespace-std).
#include <iostream>

#include "teacher.h"

// Implement the getter and setter functions for departments and titles
// (slides; https://www.learncpp.com/cpp-tutorial/classes-and-header-files/).
void Teacher::setDepartment(std::string input)
{
    m_department = input;
}

std::string Teacher::getDepartment()
{
    return m_department;
}
    
void Teacher::setTitle(std::string input)
{
    m_title= input;
}

std::string Teacher::getTitle()
{
    return m_title;
}

// Define the implementation of the specific constructor, which will be used to manually set the start day, start month, start year, first name, last name, department, and title
// (https://www.learncpp.com/cpp-tutorial/default-constructors-and-default-arguments/).
Teacher::Teacher(Date startDate, std::string firstName, std::string lastName, std::string department, std::string title)
    : m_startDate{ startDate }
    , m_firstName{ firstName }
    , m_lastName{ lastName }
    , m_department{ department }
    , m_title{ title }
{
}

// Implement the summary function that outputs all of the attributes to the command line formatted neatly.
void Teacher::summary()
{
    std::cout << "Name: " << m_lastName << ", " << m_firstName << "\n";
    std::cout << "Start date: " << m_startDate << "\n";
    std::cout << "Department: " << m_department << "\n";
    std::cout << "Title: " << m_title << "\n";
};