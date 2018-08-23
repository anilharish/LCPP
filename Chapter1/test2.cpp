#include<iostream>

int main()
{
  std::cout<< "Please enter numbers to add" << std::endl << "Please enter the first number" << std::endl;
  int x,y,z;
  std::cin >> x;
  std::cout<< "Please enter the second number" << std::endl;
  std::cin >> y;
  z=x+y;
  std::cout<< "The sum of the two numbers is: " << z << std::endl;
  return 0;
}
