// Example of examinging object as a string and char
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

#define STRLEN 10

class MyClass {
    private:
        char name[STRLEN];
        char str[STRLEN];
        int num;

    public:
        MyClass(int, const char *); 
        ~MyClass(); 
        void print ();

};

MyClass::MyClass(int x, const char * s) {
    num = x < 1000 ? x : 999;
    sprintf(name, "Object%d", x);
    strncpy (str, s, STRLEN);
    cout << "My class constructor " << num << " : " << str << endl;
}

MyClass::~MyClass() {
    cout << "My class destructor " << num << " : " << str << endl;
}

void MyClass::print () {
    cout << "print(): My Class " << num << ", " << str << endl;
}

void memdumper(void * start, int len) {
    char * ptr = (char *) start;
    int ii;

    for (ii=0;ii<len;ii++) {
       printf("%d (%c)\n", *(ptr+ii), *(ptr+ii));
    }

}

int main() {
    MyClass m(3,"Hello");
    memdumper ((void *) &m, 24);
    cout << "Object as string: " << (char *) &m << endl;
    m.print();
}


