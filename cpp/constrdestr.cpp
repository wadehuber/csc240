/* Example of constructors / destructors in C++ */
#include<iostream>
using namespace std;


class MyClass {
    private:
        char * str;
        int num;

    public:
        MyClass(int, char *); 
        ~MyClass(); 
        void print ();

};

MyClass::MyClass(int x, char * s) {
    num = x;
    str = s;
    cout << "My class constructor " << num << " : " << str << endl;
}

MyClass::~MyClass() {
    cout << "My class destructor " << num << " : " << str << endl;
}

void MyClass::print () {
    cout << "My Class " << num << ", " << str << endl;
}



int main() {
    MyClass m(3,"Hello");
}

