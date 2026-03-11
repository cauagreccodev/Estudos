#include <string>
#include <iostream>
#include "Gradebook.h"

using std::cout;
using std::endl;
using std::string;

Gradebook::Gradebook(string name){
    setCourseName(name);
}
void Gradebook::setCourseName(string name){
    courseName = name;
}

string Gradebook::getCourseName() const{
    return courseName;
}

void Gradebook::setCourseInstructorName(string name){
    courseInstructor = name;
}
        
string Gradebook::getCourseInstructorName() const{
    return courseInstructor;
}

void Gradebook::displayMessage() const{
    cout << "Welcome to the grade book for " << getCourseName() << "!" << endl;
}

void Gradebook::displayInstructorMessage() const{
    cout << "This Course is presented by: " << getCourseInstructorName() << "!" << endl;
}
