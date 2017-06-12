// Example of inheritance & polymorphism in C++
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
  Animal *animalPtr;

  Dog dog, *dogPtr;
  Snake snake, *snakePtr;

  Animal &animalRef = dog;
  Dog &dogRef = dog;

  // can't do this with an abstract class
  // animalPtr = new Animal;
  // cout << endl << "Animal pointer to Animal object" << endl;
  // animalPtr->speak();
  // animalPtr->name();

  // Initial set of calls use Dog object
  cout << endl << "Dog object" << endl;
  dog.speak();
  dog.move();    // Dog does not override move
  dog.name();

  // Same as above with Animal pointer to Dog object
  cout << endl << "Animal pointer to Dog object" << endl;
  animalPtr = &dog;
  animalPtr->speak();
  animalPtr->move();
  animalPtr->name();   // name is no-non virtual, so call Animals name()

  // Same as above with Dog pointer to Dog object
  cout << endl << "Dog pointer to Dog object" << endl;
  dogPtr = &dog;
  dogPtr->speak();
  dogPtr->move();  
  dogPtr->name();

  // Same as above with Dog reference to Dog object
  cout << endl << "Dog reference to Dog object" << endl;
  dogRef.speak();
  dogRef.move();  
  dogRef.name();

  // Same as above with Animal reference to Dog object
  cout << endl << "Animal reference to Dog object" << endl;
  animalRef.speak();
  animalRef.move();  
  animalRef.name();

  // Now use Snake pointer to Snake object
  cout << endl << "Snake pointer to Snake object" << endl;
  snakePtr = &snake;
  snakePtr->speak();
  snakePtr->move();  // Snake over
  snakePtr->name();  // 

  // Same as above with Animal pointer to Snake object
  cout << endl << "Animal pointer to Snake object" << endl;
  animalPtr = &snake;
  animalPtr->speak();  // Pure virtual method *must* be implemented by Snake
  animalPtr->move();   // Virtual method, so use method of type pointed to
  animalPtr->name();   // Name is not virtual, so use method of calling type

  cout << endl << "Dogs can fetch" << endl;
  dog.fetch();
  dogPtr->fetch();
  animalPtr = &dog;
  /* // Animals have no fetch method, so the pointer doesn't know what
     //   to point to.
  animalPtr->fetch();   
  */
  ( (Dog *) animalPtr)->fetch();  // Cast the Animal pointer to a Dog pointer

  // Array of pointers example
  Animal *animals[3] = {&dog, &snake, animalPtr};

  cout << endl << "Polymorphic calls to name()" << endl;
  for (int ii=0;ii<3;ii++){
      animals[ii]->move();
  }

}

