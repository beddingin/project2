#include "teacher.h"
#include <string>
#include <iostream>


Teacher::Teacher(int Myage, std::string Myname, int MySalary)
    : Person(Myage, Myname), salary(MySalary) {}

int Teacher::getSalary() const {
    return salary;
}

void Teacher::printCourses() const {
    for (const Course& course : courselist) {
        std::cout << course.getCourseName() << " ";
    }
    std::cout << "\n";
}
void Teacher::addCourse(const Course& course) {
    courselist.push_back(course);
}
//poly
void Teacher::printName() const {
    std::cout << "This is teacher " << getName() << "\n";
}
//will be used in test aka main cause this was made in online complier
void Teacher::printInformation() const {
    std::cout << "Teacher Name: " << getName() << "\n";
    std::cout << "Salary: $" << getSalary() << "\n";
    std::cout << "Courses taught:\n";
    for (const Course& course : courselist) {
        std::cout << "  - " << course.getCourseName() << ": " << course.getCourseDesc() << "\n";
    }
}

const std::vector<Course>& Teacher::getCourses() const {
    return courselist;
}

Teacher::~Teacher() {}
