// Add header guards (https://www.learncpp.com/cpp-tutorial/header-guards/).
#ifndef PERSON_H
#define PERSON_H

// Allow the use of std::string (https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/).
#include <string>

#include "date.h"

class Person {
// Define protected attributes start date and first and last names.
protected:
    Date m_startDate {};
    std::string m_firstName {};
    std::string m_lastName {};

public:

    // Declare getter and setter functions for m_firstName, m_lastName, and a getter function for m_startDate (slides).
    void setFirstName(std::string input);
    std::string getFirstName();

    void setLastName(std::string input);
    std::string getLastName();

    Date getStartDate();

    // Declare the specified constructor for the Person class.
    Person(Date startDate, std::string firstName, std::string lastName);
};

// Add header guard (https://www.learncpp.com/cpp-tutorial/header-guards/).
#endif