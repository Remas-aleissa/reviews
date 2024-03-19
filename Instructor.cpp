#include "Instructor.h"
#include <iostream>
using namespace std;

    Instructor::Instructor(string Iid,string Cid,section& sec,string fn,string pn):
    Person(fn,pn), sec(sec),InstructorId(Iid),CourseId(Cid){ 
        
    }
    
    void Instructor::printInfo(){
        Person::printInfo();
        cout << "Instructor ID: " << getInstructorId() <<
        endl << "Course ID:" << getInstructorId() << endl;
        cout << "Students names:" <<endl;
        sec.printStudentNames();
        cout << "\nSection No. " << sec.getSectionNo() << endl;
    }
    void Instructor::setInstructorId(string n){
        InstructorId = n;
    }
    void Instructor::setCourseId(string n){
        CourseId = n;
    }
    void Instructor::setSection(section&n){
        sec = n;
    }
    string Instructor::getInstructorId(){
        return InstructorId;
    }
    string Instructor::getCourseId(){
        return CourseId;
    }
    section Instructor::getSection(){
        return sec;
    }