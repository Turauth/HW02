# include <typeinfo>
#include "student.cpp"
#include "teacher.cpp"

int main() {
    Person p1{};
    p1.setFirstName("Jonah");
    p1.setLastName("Tyree");

    Student s1{"8/16/2018", p1.getFirstName(), p1.getLastName(), 2022, "Engineering"};

    s1.summary();

    return 0;
}