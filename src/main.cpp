#include <iostream>
#include "arithmetics.hpp"

int main() {
  std::cout << "TravisCI and Google Test in one project." << std::endl;
  std::cout << "arithmetics::add(1, 1) = " << arithmetics::add(1, 1)
            << std::endl;
  std::cout << "arithmetics::add_buggy(1, 1) = " << arithmetics::add_buggy(1, 1)
            << std::endl;
}