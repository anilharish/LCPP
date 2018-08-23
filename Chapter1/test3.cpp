#include<iostream>

void doprint()
{
  std::cout << "In doprint()" << std::endl;
}

int main()
{
  std::cout << "Starting main()" <<std::endl;
  doprint();
  std::cout << "Ending main()" << std::endl;

  return 0;
}
