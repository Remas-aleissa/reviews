#include<iostream>
#include"Student.h"
using namespace std;
int main(){
Student std1("441203422", 880) , std2;
std1.addcourse("CS181");
std1.addcourse("cs182");
std1.addcourse("it214");
std1.addcourse("coe121");
std2.copyStudentObj(std1);
std2.displayStudentInfo();
    return 0;
}