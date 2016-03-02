#include<iostream>
using namespace std;

int main() {
  string str1;
  string str2("Hello, world!");

  cout << "String 1: " << str1 << endl;
  cout << "String 2: " << str2 << endl << endl;

  str1 = "CSC240 C++ Strings";
  cout << "String 1: " << str1 << endl;
  cout << "String 2: " << str2 << endl << endl;

  
  cout << "str2 + str1 + : " << str2  + str1 << endl << endl;
  cout << "\"March 1: \" + str1: " << "March 1: " + str1 << endl << endl;

  cout << "str1 length = " << str1.length() << endl;

  cout << "Enter a string (str2): ";
  // cin >> str2;
  getline(cin, str2);
  cout << "String 1: " << str1 << endl;
  cout << "String 2: " << str2 << endl << endl;

  
  return 0;
}
