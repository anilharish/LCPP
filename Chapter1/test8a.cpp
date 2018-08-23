#include<iostream>

int add(int a, int b);
int multiply (int c, int d);

int main()
{
  int x,y;
  std::cout << "Enter any two numbers, Press Enter or Return after each number" << std::endl;
  std::cin >> x >> y;
  std::cout << "The sum of the numbers is: " << add(x,y) << std::endl;
  std::cout << "The product of the numbers is: " << multiply(x,y) << std::endl;
  return 0;
}
