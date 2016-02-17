#include<iostream>
#include<string>

using namespace std;

class myClass {
  private:
    int a;
    string s;
  public:
    myClass(int x, string y) {
      a = x;
      s = y;
      cout << "Constructor " << a << endl;
    }
    ~myClass() {
      cout << "Destructor " << a << endl;
    }

    void printMe();
};

// Defined outside the class so the scope resolution operator is required
void myClass::printMe() 
{
   cout << "a=" << a << "   s=" << s << endl;
}

int main() {
  myClass obj1(10, "Hello!");  // Variable
  myClass * ptr1, * ptr2;      // Pointers

  ptr1 = new myClass(20, "World!");
  ptr2 = &obj1;

  obj1.printMe(); 
  ptr1->printMe(); 
  ptr2->printMe(); 
 
  delete(ptr1);                // calls destructor
  return 0;
}
