#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

//student class
class Student {
 public:
  Student(int); //constructor
  int getID(); //function to get student id
 protected:
  int id;
};
#endif
