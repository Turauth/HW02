// Add header guards (https://www.learncpp.com/cpp-tutorial/header-guards/).
#ifndef PERSON_H
#define PERSON_H

// Allow the use of std::string (https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/).
#include <string>

#include "date.cpp"

class Person {
// Define private integer attributes for start date and first and last names.
protected:
    std::string m_startDate {};
    std::string m_firstName {};
    std::string m_lastName {};

public:
    // Declare getter and setter functions for firstName and lastName (slides).
    void setFirstName(std::string input);
    std::string getFirstName();

    void setLastName(std::string input);
    std::string getLastName();
};

// Add header guard (https://www.learncpp.com/cpp-tutorial/header-guards/).
#endif