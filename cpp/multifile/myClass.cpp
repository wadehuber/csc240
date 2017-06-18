#include<iostream>
#include<string>
#include"myClass.hpp"

// Defined outside the class so the scope resolution operator is required
void myClass::print() {
    std::cout << "a=" << a << "   s=" << s << std::endl;
}

void myClass::set(int a, std::string s) {
   this->a = a;
   this->s = s;
}
