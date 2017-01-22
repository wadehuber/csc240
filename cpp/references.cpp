#include<iostream>

// Return a reference to the smaller argument
int& whichIsSmaller(int &x, int &y) {
    if (x <= y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
  int number = 10;
  int number2 = 20;
  // int & numReference;   // A reference must be initialized when declared
  int & numReference = number;

  std::cout << "number: " << number << std::endl;
  std::cout << "number2: " << number2 << std::endl;
  std::cout << "numReference: " << numReference << std::endl << std::endl;

  // numReference is an alias of number
  numReference = 15;
  std::cout << "number: " << number << std::endl;
  std::cout << "numReference: " << numReference << std::endl;
  std::cout << "number2: " << number2 << std::endl;
  std::cout << "The smaller number is " << whichIsSmaller(number, number2) << std::endl << std::endl;

  // use reference returned from a function
  whichIsSmaller(number, number2) = 30;
  std::cout << "number: " << number << std::endl;
  std::cout << "numReference: " << numReference << std::endl << std::endl;
  std::cout << "number2: " << number2 << std::endl;
  std::cout << "The smaller number is now " << whichIsSmaller(number, number2) << std::endl;

  return 0;
}
