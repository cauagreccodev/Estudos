#include <iostream>
using std::cout;
using std::endl;

#include "Gradebook.h"

int main(){
    Gradebook gradeBook1("CS101 Introduction to Programming in C++");
    Gradebook gradeBook2("CS102 C++ Data Structures");

    cout << "gradeBook1's initial course name is: "
        << gradeBook1.getCourseName()
        << "\n gradeBook2's initial course name is: "
        << gradeBook2.getCourseName() << endl;
    
    gradeBook1.setCourseName("CS101 C++ Programming");

    cout << "\ngradeBook1's course name is: "
        <<gradeBook1.getCourseName()
        << "\ngradeBook2's course name is: "
        <<gradeBook2.getCourseName() << endl;
    return 0;
}