#include <iostream>

class A {
public:
  void print() {
    std::cout << "A::print()" << std::endl;
  }
};

class B : public A {
public:
  void print() {
    std::cout << "B::print()" << std::endl;
  }
};

void print(A obj) {
  obj.print();
}

int main() {
  B obj;
  print(obj);
  return 0;
}
