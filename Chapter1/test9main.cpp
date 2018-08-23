#include<iostream>
#include "test9add.h"

int main()
{
  int a,b;
  std::cout << "Please enter two numbers you wish to add, press enter after each number" << std::endl;
  std::cin >> a >> b;
  std::cout << "The addition of the two numbers is: " << add(a,b) << std::endl;
  return 0;
}
