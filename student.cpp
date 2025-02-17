// Allow the use of std::string (https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/).
#include <string>

// Enable this file to read or write to the standard input/output streams and use the std namespace (https://stackoverflow.com/questions/22645097/what-does-include-iostream-do; 
// https://stackoverflow.com/questions/18914106/what-is-the-use-of-using-namespace-std).
#include <iostream>

#include "student.h"

// Implement the getter and setter functions for graduation years and majors 
// (slides; https://www.learncpp.com/cpp-tutorial/classes-and-header-files/).
void Student::setGraduationYear(int input)
{
    m_graduationYear = input;
}

int Student::getGraduationYear()
{
    return m_graduationYear;
}
    
void Student::setMajor(std::string input)
{
    m_major= input;
}

std::string Student::getMajor()
{
    return m_major;
}

// Define the implementation of the specific constructor, which will be used to manually set the start day, start month, start year, first name, last name, graduation year, and major
// (https://www.learncpp.com/cpp-tutorial/default-constructors-and-default-arguments/).
Student::Student(std::string startDate, std::string firstName, std::string lastName, int graduationYear, std::string major)
    : m_graduationYear{ graduationYear }
    , m_major{ major }
{
}

// Implement the summary function that outputs all of the attributes to the command line formatted neatly.
void Student::summary()
{
    std::cout << "Name: " << m_lastName << ", " << m_firstName << "\n";
    std::cout << "Start date: " << m_startDate << "\n";
    std::cout << "Major: " << m_major << "\n";
    std::cout << "Graduation year: " << m_graduationYear << "\n";
};