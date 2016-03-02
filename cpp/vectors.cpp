#include<iostream>
#include<vector>
using namespace std;
#define COUNT 5

int main() {
  vector<int> nums(COUNT);
  int ii;

  for (ii=0;ii<COUNT;ii++) {
    nums[ii] = 2 * ii;
  }

  cout << "size of vector = " << nums.size() << endl;

  // Array-style access (UNSAFE)
  for (ii=0;ii<COUNT;ii++) {
    cout << "[" << ii << "] " << nums[ii] << endl;
  }

  cout << endl;
  // at is aware of the size of the array
  for (ii=0;ii<COUNT;ii++) {
    cout << "[" << ii << "] " << nums.at(ii) << endl;
  }

  cout << endl << "Other methods:" << endl;
  cout << "nums.front() = " << nums.front() << endl;
  cout << "nums.back() = " << nums.back() << endl;

  cout << "push 10, 20, & 30" << endl;
  nums.push_back(10);
  nums.push_back(20);
  nums.push_back(30);
  for (ii=0;ii<nums.size();ii++) {
    cout << "[" << ii << "] " << nums.at(ii) << endl;
  }


  cout << endl << "pop!, pop!" << endl;
  nums.pop_back();
  nums.pop_back();
  for (ii=0;ii<nums.size();ii++) {
    cout << "[" << ii << "] " << nums.at(ii) << endl;
  }
  return 0;
}
