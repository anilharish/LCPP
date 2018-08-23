#include<iostream>

int requestnumbers()
{
  int a;
  std::cout << "Please enter a number and press enter" << std::endl;
  std::cin >> a;
  return a;
}

int main ()
{
  int x,y,z;
  std::cout << "Please enter the numbers for multiplication" << std::endl;
  x=requestnumbers();
  y=requestnumbers();
  z=x*y;
  std::cout << "The product of the numbers are: " << x << " X " << y << " = " << z << std::endl;
}
