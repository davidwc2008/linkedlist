/*
David Chen
2017
Linked List Part 1 Program in C++
This is a student list program that uses linked lists
*/

//include libraries and h files
#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

int main() {

  //set student pointers
  Student* student1 = new Student(298808);
  Student* student2 = new Student(412999);

  //set node pointers
  Node* node1 = new Node(student1);
  Node* node2= new Node(student2);

  //set the next node for node1 to be node2
  node1-> setNext(node2);

  //print the new id
  cout << node1 -> getNext() -> getStudent() -> getID() << endl;

  return 0;
}


