#ifndef TEACHER_H
#define TEACHER_H
#include <vector>
#include "course.h"
#include "person.h"
//very simular to student but with salary
class Teacher : public Person {
private:
    int salary{};
    std::vector<Course> courselist{};

public:

    Teacher(int Myage, std::string Myname, int MySalary);
    int getSalary() const;
    void printCourses() const;
    void printName() const;
    void printInformation() const;
    void addCourse(const Course& course);


    const std::vector<Course>& getCourses() const;

    virtual ~Teacher();
};

#endif
