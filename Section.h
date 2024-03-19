#ifndef S_H
#define S_H
#include <string>
using namespace std;
class section{
  string studentNames[4];
  int sectionNo;
  public:
  section(int sectionNo);
  void inputStudentNames();
  void printStudentNames();
  void setSectionNo(int n);
  int getSectionNo();
};
#endif