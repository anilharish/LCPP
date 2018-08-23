#include <iostream>

int userinput(int x)
{
  int y;
  std::cout << "Please enter number " << x << " : " << std::endl;
  std::cin >> y;
  return y;
}

int userinputop()
{
  int x;
  std::cout << "Please enter corresponding the operator numer: 1==> '+'; 2 ==> '-'; 3 ==> '*'; 4 ==> '/': " << std::endl;
  std::cin >> x;
  return x;
}

float calculate(float x, float y , float z)
{
  if(z==1)
    {
      return x+y;
    }
  if(z==2)
    {
      return x-y;
    }
  if(z==3)
    {
      return x*y;
    }
  if(z==4)
    {
      return x/y;
    }
}

void useroutput(float x)
{
  std::cout << "The output for the chosen operation is: " << x << std::endl;
}
