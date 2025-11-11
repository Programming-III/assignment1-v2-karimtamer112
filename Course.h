#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>
#include "Student.h"

using namespace std;

class Course{

    private:
        string courseCode;
        string courseName;
        int maxStudents;
        Student* students;
        int currentStudents;

    public:

        Course(string courseCode, string courseName, int maxStudents, int currentStudents);
        Course();
        ~Course();
        void addStudent(const Student);
        void displayCourseInfo();

};

#endif
