#include<iostream>

int userinput();
void printoutput(int number);

int main ()
{
  int input{0};
  input=userinput();
  printoutput(input);
  return 0;
}

int userinput()
{
  std::cout << "Please enter the number you want to find out is odd or even: \n";
  int input{0};
  
  std::cin >> input;
  return input;
}

void printoutput(int input)
{
  if (input % 2 == 0)
    {
      std::cout << "The number entered is even\n";
    }
  else
    {
      std::cout << "The number entered is odd\n";
    }
}

  
