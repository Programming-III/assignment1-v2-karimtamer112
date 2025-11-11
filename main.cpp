#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

using namespace std;

class Person{

    string name;
    int id;

    Person :: Person(string name, int id){
        
        this -> name = name;
        this -> id = id;
    }

    Person :: Person(){
        name = "";
        id = 0;
    }
    
    Person :: ~Person(){
        cout << "Person Destructor Called" << endl;
    }

    void Person :: display(){

        cout << "Person name: " << name << endl;
        cout << "Person id: " << id << endl;
    }
};

class Student: public Person{

    int yearLevel;
    string major;


    Student :: Student(string name, int id, int yearLevel, string major){

        Person(name, id);
        this -> yearLevel = yearLevel;
        this -> major = major;

    }

    Student :: Student(){

        Person();
        yearLevel = 0;
        major = "";
    }

    Student :: ~Student(){

        cout << "Student Destructor called" << endl;
    }

    void Student :: display(){

        cout << "Student name: " << name << endl;
        cout << "Student id: " << id << endl;
        cout<< "Year level: " << yearLevel << endl;
        cout << "major: " << major << endl;
    }


};

class Instructor: public Person{

    string department;
    int experienceYears;

    Instructor :: Instructor(string name, int id, string department , int experienceYears){
        
        Person(name, id);
        this -> department = department;
        this -> experienceYears = experienceYears;

    }

    Instructor :: Instructor(){

        Person();
        department = "";
        experienceYears = 0;

    }

    Instructor :: ~Instructor(){

        cout << "Instructor Destructor called" << endl;

    }

    void Instructor :: display(){
        
        cout << "Instructor name: " << name << endl;
        cout << "Instructor id: " << id << endl;
        cout << "Instructor department: " << department << endl;
        cout << "Instructor experience: " << experienceYears << endl;

    }

};

class Course{

    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

    Course(string courseCode, string courseName, int maxStudents, int currentStudents){
        


        this -> courseCode = courseCode;
        this -> courseName = courseName;
        this -> maxStudents = maxStudents;
        this -> currentStudents = currentStudents
        students[currentStudents];

    }

    Course :: Course(){

        courseCode = "";
        courseName = "";
        maxStudents = 0;
        currentStudents = 0;

    }

    Course :: ~Course(){

    }

    void Course :: addStudent(const Student){
        students[currentStudents] = Student;
        currentStudents++;
    }

    void Course :: display(){

        cout << name << id << courseCode << courseName << maxStudents << currentStudents <<endl;
    }

};

int main(){


    return 0;

}


