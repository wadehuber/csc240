#include<iostream>
#include<string>
#include"myClass.hpp"

// Compile with:
//   g++ --std=c++11 multifile.cpp myClass.cpp

using namespace std;

int main() {
  myClass obj1(10, "Hello!");  // Variable
  myClass * ptr1, * ptr2;      // Pointers

  ptr1 = new myClass(20, "World!");
  ptr2 = &obj1;

  cout << "Initial: " << endl;
  obj1.print(); 
  ptr1->print(); 
  ptr2->print(); 
 
  obj1.set(15, "The");
  ptr2->set(25, "End!");
  cout << endl << "after changes: " << endl;
  obj1.print(); 
  ptr1->print(); 
  ptr2->print(); 

  delete(ptr1);                // calls destructor
  return 0;
}

