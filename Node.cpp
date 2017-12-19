//include libraries and header file
#include <iostream>
#include "Node.h"

//constructor
Node::Node(Student* pstudent) { 
  s = pstudent;
  n = NULL;
}
//deconstructor
Node::~Node() {
  delete s;
  n = NULL;
}
//get the next node pointer
Node* Node::getNext() { 
  return n;
}
//get the student pointer
Student* Node::getStudent() { 
  return s;
}
//set next pointer to that node
void Node::setNext(Node* next) { 
  n = next;
}
