#ifndef MYCLASS_HPP
#define MYCLASS_HPP

class myClass {
  private:
    int a;
    std::string s;
  public:
    myClass(int x, std::string y) {
      a = x;
      s = y;
      std::cout << "Constructor " << a << std::endl;
    }

    ~myClass() {
        std::cout << "Destructor " << a << std::endl;
    }

    void print();
    void set(int a, std::string s);
};

#endif  // MYCLASS_HPP
