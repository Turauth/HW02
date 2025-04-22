#include "teacher.h"
#include "student.h"

int main() {

    // Instantiate Student and Teacher objects.
    Student jonah({8, 16, 2018}, "Jonah", "Tyree", 2022, "Engineering");
    Student katherine({1, 3, 2020}, "Katherine", "Walls", 2024, "English");
    Teacher jud({6, 11, 2009}, "Jud", "Davis", "Christian Studies", "associate professor");
    
    // Output object information.
    jonah.summary();
    katherine.summary();
    jud.summary();

    // Change object properties.
    katherine.setMajor("Education");
    jud.setTitle("full professor");
    jonah.setGraduationYear(2021);

    // Output object information.
    jonah.summary();
    katherine.summary();
    jud.summary();
    std::cout << jud.getStartDate() << std::endl;

    return 0;
}