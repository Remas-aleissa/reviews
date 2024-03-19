#ifndef I_H
#define I_H
#include "Person.h"
#include "section.h"
class Instructor : public Person{
    string InstructorId, CourseId;
    section sec;
    public:
    Instructor(string,string,section&,string,string);
    void printInfo();
    void setInstructorId(string);
    void setCourseId(string);
    void setSection(section&);
    string getInstructorId();
    string getCourseId();
    section getSection();
    
};

#endif
