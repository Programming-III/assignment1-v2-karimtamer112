#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

class Instructor{

    private:
        
        string department;
        int experienceYears;
    
    public:
        
        Instructor(string department);
        Instructor();
        ~Instructor();
        void display();


};

#endif
