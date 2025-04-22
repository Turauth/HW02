// Add header guards (https://www.learncpp.com/cpp-tutorial/header-guards/).
#ifndef STUDENT_H
#define STUDENT_H

// Allow the use of std::string (https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/).
#include <string>

#include "person.h"

class Student : public Person {
// Define private integer attributes for graduation year and major.
private:
    int m_graduationYear {};
    std::string m_major {};

public:
    // Declare getter and setter functions for graduationYear and major (slides).
    void setGraduationYear(int input);
    int getGraduationYear();

    void setMajor(std::string input);
    std::string getMajor();

    // Declare a specific constructor to assign the start day, start month, start year, first name, last name, graduation year, and major
    // (https://www.learncpp.com/cpp-tutorial/default-constructors-and-default-arguments/; https://www.learncpp.com/cpp-tutorial/classes-and-header-files/).
    Student(Date startDate, std::string firstName, std::string lastName, int graduationYear, std::string major);

    // Declare a summary function.
    void summary();
};

// Add header guard (https://www.learncpp.com/cpp-tutorial/header-guards/).
#endif