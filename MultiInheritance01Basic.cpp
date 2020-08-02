/*
 * =====================================================================================
 *
 *       Filename:  MultiInheritance01Basic.cpp
 *
 *    Description:  Basic example of multi inheritance
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mike@guzmanalan.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

struct Base1 {
  void doSomething(int num) {
    std::cout << "INT - Base 1 ::doSomething(" << num << ")\n" << std::endl;
  }
};

struct Base2 {
  void doSomething(int num) {
    std::cout << "INT - Base 2 ::doSomething(" << num << ")\n" << std::endl;
  }
};

struct Derived : Base1, Base2 {
};

// function main begins program execution
int main(int argc, const char *argv[]) {
  std::cout << "Welcome to the UNA!" << std::endl;

  Derived derived;

  derived.Base1::doSomething(1);
  derived.Base2::doSomething(2);
  
}  // end function main