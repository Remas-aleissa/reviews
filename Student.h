#include<iostream>
using namespace std;
#ifndef STD_H
#define STD_H
class Student{
    string std_ID, *Course_codes = new string[10];
    int max_num;
    int course_num;
    public:
    Student();
    Student(string studintId, int maximumnumberofcourse);
    ~Student();
    void displayStudentInfo();
    bool findCourseCode(string codeofcourse);
    void addcourse(string newcoursecode);
    void setMax(int);
    int getMax();
    void copyStudentObj(Student& another);

};
#endif