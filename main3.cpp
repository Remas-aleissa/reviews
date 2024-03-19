#include <iostream>
using namespace std;
#include "Instructor.h"

int main(){
section s1(2);
s1.inputStudentNames();
Instructor i1("101","CS182",s1,"Bayan","050000000");
i1.printInfo();

    return 0;
}
