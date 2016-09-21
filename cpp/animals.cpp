/* Example of inheritance in C++ */
#include<iostream>
using namespace std;

class Animal {
  public:
    // Pure virtual method
    virtual void speak () = 0;  

    // Virtual method - can be overridden by child class
    virtual void move () {
        cout << "Moving" << endl;
    }

    // Virtual method - can be overridden by child class.  Animal pointer 
    //   will always call this method no matter the type it is pointing to
    void name () {
       cout << "Animal" << endl;
    }
};

// Dog does not override move()
class Dog : public Animal {
  public:
    void speak () {
       cout << "Woof" << endl;
    }

    void name () {
       cout << "Rover" << endl;
    }

    void fetch() {
      cout << "Fetching! " << endl;
    }
};

// Snake overrides move()
class Snake : public Animal {
  public:
    void speak () {
       cout << "Sssss" << endl;
    }
    void move () {
        cout << "Slithering" << endl;
    }
    void name () {
       cout << "Ralph" << endl;
    }
};


int main() {
  Animal *a1;

  Dog d1, *d2;
  Snake s1, *s2;

  // can't do this with an abstract class
  // a1 = new Animal;
  // cout << endl << "Animal pointer to Animal object" << endl;
  // a1->speak();
  // a1->name();

  // Initial set of calls use Dog object
  cout << endl << "Dog object" << endl;
  d1.speak();
  d1.move();    // Dog does not override move
  d1.name();

  // Same as above with Animal pointer to Dog object
  cout << endl << "Animal pointer to Dog object" << endl;
  a1 = &d1;
  a1->speak();
  a1->move();
  a1->name();   // name is no-non virtual, so call Animals name()

  // Same as above with Dog pointer to Dog object
  cout << endl << "Dog pointer to Dog object" << endl;
  d2 = &d1;
  d2->speak();
  d2->move();  
  d2->name();

  // Now use Snake pointer to Snake object
  cout << endl << "Snake pointer to Snake object" << endl;
  s2 = &s1;
  s2->speak();
  s2->move();  // Snake over
  s2->name();  // 

  // Same as above with Animal pointer to Snake object
  cout << endl << "Animal pointer to Snake object" << endl;
  a1 = &s1;
  a1->speak();  // Pure virtual method *must* be implemented by Snake
  a1->move();   // Virtual method, so use method of type pointed to
  a1->name();   // Name is not virtual, so use method of calling type

  cout << endl << "Dogs can fetch" << endl;
  d1.fetch();
  d2->fetch();
  a1 = &d1;
  /* // Animals have no fetch method, so the pointer doesn't know what
     //   to point to.
  a1->fetch();   
  */
  ( (Dog *) a1)->fetch();  // Cast the Animal pointer to a Dog pointer

  // Polymorphism example
  Animal *animals[3] = {&d1, &s1, a1};
  int ii;

  cout << endl << "Polymorphic calls to name()" << endl;
  for (ii=0;ii<3;ii++){
      animals[ii]->move();
  }
}

