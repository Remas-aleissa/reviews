#include "section.h"
#include <iostream>
using namespace std;
  section::section(int sectionNo):sectionNo(sectionNo){
  }
  void section::inputStudentNames(){
      if(sectionNo <= 4){
          for(int i = 0; i < sectionNo; i++){
              getline(cin,studentNames[i]);
          }
      }
      else{
          cout << "No much more size\n";
      }
  }
  void section::printStudentNames(){
      for(int i = 0; i < sectionNo; i++){
          cout << studentNames[i] << endl;
      }
  }
  void section::setSectionNo(int n){
      sectionNo = (n > 0)?n:1;
  } 
  int section::getSectionNo(){
      return sectionNo;
  }