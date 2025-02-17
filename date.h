// Add header guards (https://www.learncpp.com/cpp-tutorial/header-guards/).
#ifndef DATE_H
#define DATE_H

// Enable this file to read or write to the standard input/output streams and use the std namespace (https://stackoverflow.com/questions/22645097/what-does-include-iostream-do; 
// https://stackoverflow.com/questions/18914106/what-is-the-use-of-using-namespace-std).
#include <iostream>

class Date {
// Define private integer attributes for day, month, and year.
private:
    int m_month {};
    int m_day {};
    int m_year {};

public:
    // Declare a default constructor for the date class.
    Date();

    // Declare a specific constructor for the date class.
    // (https://www.learncpp.com/cpp-tutorial/default-constructors-and-default-arguments/; https://www.learncpp.com/cpp-tutorial/classes-and-header-files/).
    Date(int month, int day, int year);

    // Declare the overloading of the output stream operator (<<)
    // (slides; https://stackoverflow.com/questions/47083328/operator-overloading-in-header-files-and-in-the-cpp-files)
    friend std::ostream& operator<<(std::ostream& os, const Date& dt);
};

// Add header guard (https://www.learncpp.com/cpp-tutorial/header-guards/).
#endif