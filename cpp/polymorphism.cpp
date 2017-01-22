// Example of polymorphism in C++ 
#include<iostream>

class Parent {
  public:
    virtual void pureVirtualMethod () = 0;    
    virtual void virtualMethod () {
        std::cout << "Parent's pure virtual method" << std::endl;
    }
    void method () {
        std::cout << "Parent's method" << std::endl;
    }
};

class Child : public Parent {
  public:
    virtual void pureVirtualMethod () {
        std::cout << "Child's pure virtual method" << std::endl;
    }
    virtual void virtualMethod () {
        std::cout << "Child's pure virtual method" << std::endl;
    }
    void method () {
        std::cout << "Child's method" << std::endl;
    }
};

int main() {
    Child child1;
    Child *childPtr = & child1;
    Child &childRef = child1;

    // Parent is an abstract type so you can't instantiate it.  
    //   But you *can* have pointers/references of Parent type.
    // Parent parent1;   
    Parent *parentPtr;
    Parent &parentRef = child1;

    std::cout << "child1 : Child object" << std::endl << std::endl;
    child1.pureVirtualMethod();
    child1.virtualMethod();
    child1.method();

    std::cout << "childPtr : Child pointer" << std::endl << std::endl;
    childPtr->pureVirtualMethod();
    childPtr->virtualMethod();
    childPtr->method();

    std::cout << "childRef : Child reference" << std::endl << std::endl;
    childRef.pureVirtualMethod();
    childRef.virtualMethod();
    childRef.method();
}
