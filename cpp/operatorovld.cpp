#include<iostream>

using namespace std;

class MyClass {
  public:
    int a;
  MyClass(int x=0) {
    a = x;
  }
  void print() {
    cout << "  Printing: " << a << endl;
  }
  MyClass operator+ (const MyClass &that);
};

MyClass MyClass::operator+ (const MyClass &that) {
  MyClass ret(this->a + that.a);
  return ret;
}

// ------ end of MyClass ---------

ostream& operator<< (ostream &strm, const MyClass &m) {
  strm << "[" << m.a << "]";
  return strm;
}

int operator+(const int num, const MyClass &m) {
  return num + m.a;
}

int main() {
  MyClass c1(1);
  MyClass c2(2);
  MyClass result;

  c1.print();
  c2.print();

//  cout << "c1 + c2 = " << c1.a << " + " << c2.a << " = " << c1.a + c2.a << endl;
  cout << "c1 + c2 = " << c1 << " + " << c2 << " = " << c1.a + c2.a << endl;
  result = c1 + c2;
  cout << "result = " << result << endl;
  cout << "3 + c1 = " << 3 + c1 << endl;

  cout << "c1 + c2 = " << c1 << " + " << c2 << " = " << c1 + c2 << endl;

  return 0;
}

