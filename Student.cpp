#include<iostream>
#include"Student.h"
using namespace std;

Student::Student(){
    course_num=0;
    max_num=5;
    Course_codes= new string[max_num];
}
Student::Student(string studentId, int maximumnumberofcourse){
    course_num=0;
    studentId = std_ID;
    setMax(maximumnumberofcourse);
    Course_codes= new string[max_num];
}
Student::~Student(){
    cout<<"Student destructor runs\n";
}
void Student::displayStudentInfo(){
    cout<<"Studen id:"<<std_ID<<endl;
    cout<<"Maximum number is:"<<getMax()<<endl;
    cout<<"course number is:"<<course_num;
    cout<<"Course code is:"<<endl;
    for(int i=0 ; i<course_num;i++){
       cout<< Course_codes[i]<<endl;
    }
}
bool Student::findCourseCode(string x){
    for(int i=0; i<course_num;i++){
        if(Course_codes[i]==x){
            return true;
            break;
        }
    }
        return false;
}
void Student::addcourse(string newcoursecode){
    if(course_num<getMax()){
        Course_codes[course_num] = newcoursecode;
        course_num++;
    }
    else{
        cout<<"Error are reach the limits!\n";
    }
}
void Student::setMax(int x){
max_num = (x <=8 && x>=2)?x:5;
}
int Student::getMax(){
    return max_num;
}
 void Student::copyStudentObj(Student& another){
max_num = another.getMax();
std_ID = another.std_ID;
course_num = another.course_num;
Course_codes = new string[getMax()];
 }