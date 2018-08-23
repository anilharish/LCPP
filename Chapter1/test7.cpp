#include<iostream>

int add (int a, int b);
int multiply(int c, int d);

int main()
{
  int x,y;
  std::cout << "Please enter the integers for manipulation" << std::endl;
  std::cin >> x >> y;
  //std::cout << "Please enter the second integer for manippulation" << std::endl;
  //std::cin << y;
  std::cout << "The sum is: " << add(x,y) << std::endl;
  std::cout << "The product is: " << multiply(x,y) << std::endl;
  std::cout << "Action 1: " << add (1+1,2*3) << std::endl;
  std::cout << "Action 2: " << multiply(2*3, y) << std:: endl;
  std::cout << "Action 3: " << add (multiply(x,5*6),x) * multiply(add(1,add(2,3)),y) << std::endl;
  std::cout << "Action 4: " << multiply(x,add(x,y))+ add(x,multiply(x,y))  << std::endl;
  return 0;
}

int add(int a,int b)
{
  return a+b;
}

int multiply(int c,int d)
{
  return c*d;
}
