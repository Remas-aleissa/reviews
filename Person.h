#include<iostream>
using namespace std;
#ifndef PER_H
#define PER_H
class Person{
    string fullName , phoneNumber;
    public:
    Person(string name, string phone);
    void setName(string);
    string getName();
    void setPhone(string);
    string getPhone();
    void printInfo();
};
#endif