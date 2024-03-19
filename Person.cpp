#include<iostream>
#include"Person.h"
using namespace std;
 Person::Person(string name, string phone){
    setName(name);
    setPhone(phone);
 }
void Person::setName(string x){
    fullName = x;
}
string Person::getName(){
    return fullName;
}
void Person::setPhone(string y){
phoneNumber = y;
}
string Person::getPhone(){
    return phoneNumber;
}
void Person::printInfo(){
    cout<<"The full Name is:"<<getName()<<endl;
    cout<<"The phone number is:"<<getPhone()<<endl;
}