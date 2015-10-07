/* Example of constructors / destructors in C++ */
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;


class MyClass {
    private:
        char * str;
        int num;

    public:
        MyClass(int, const char *); 
        ~MyClass(); 
        void print ();

};

MyClass::MyClass(int x, const char * s) {
    num = x;
    str = (char *) malloc(strlen(s));
    strncpy (str, s, strlen(s));
    cout << "My class constructor " << num << " : " << str << endl;
}

MyClass::~MyClass() {
    cout << "My class destructor " << num << " : " << str << endl;
    free(str);
}

void MyClass::print () {
    cout << "print(): My Class " << num << ", " << str << endl;
}

int main() {
    MyClass m(3,"Hello");
    m.print();
}

