// Add header guards (https://www.learncpp.com/cpp-tutorial/header-guards/).
#ifndef TEACHER_H
#define TEACHER_H

// Allow the use of std::string (https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/).
#include <string>

#include "person.cpp"

class Teacher : public Person {
// Define private integer attributes for department and title.
private:
    std::string m_department {};
    std::string m_title {};

public:
    // Declare getter and setter functions for department and title (slides).
    void setDepartment(std::string input);
    std::string getDepartment();

    void setTitle(std::string input);
    std::string getTitle();

    // Declare a specific constructor to assign the start day, start month, start year, first name, last name, department, and title
    // (https://www.learncpp.com/cpp-tutorial/default-constructors-and-default-arguments/; https://www.learncpp.com/cpp-tutorial/classes-and-header-files/).
    Teacher(Date startDate, std::string firstName, std::string lastName, std::string department, std::string title);

    // Declare a summary function.
    void summary();
};

// Add header guard (https://www.learncpp.com/cpp-tutorial/header-guards/).
#endif