#include<iostream>

int return5()
{
  return 6;
}

int main()
{
  std::cout << return5() << std::endl;
  std::cout << return5() + 10 << std::endl;

  return5();
  return 0;
}
