#include <iostream>

void printASCII(char x);

int main ()
{
  std::cout << "Please input no more than 4 characters: ";
  int i;
  char a;
  for (i=3;i>=0;--i)
  {
    std::cin >> a;
    printASCII(a);
  }
  return 0;
}

void printASCII(char x)
{
  std::cout << "The integer equavalency of the character is: " << static_cast<int>(x) <<"\n";
}
