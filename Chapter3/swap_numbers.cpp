#include <iostream>

int userinputsmall();
int userinputlarge();

int main ()
{
  int number1{}, number2{};
  number1 = userinputsmall();
  number2 = userinputlarge();

  if (number1 == number2)
    {
      while (number1 == number2)
	{
	  std::cout << "You cannot input equal numbers. Please re-enter the integers\n";
	  number1 = userinputsmall();
	  number2 = userinputlarge();
	}
    }
      
  if (number1 > number2)
    {
      int swap{};
      swap=number1;
      number1=number2;
      number2=swap;
    }

  std::cout << "The smaller number is: " << number1 << "\n";
  std::cout << "The larger number is: " << number2 << "\n";

  return 0;  
}

// Function to get smaller integer input from user

int userinputsmall()
{
  int integer;
  std::cout << "Please enter an integer: ";
  std::cin >> integer;
  std::cout << "\n";
  return integer;
}

// Function to get larger integer input from user

int userinputlarge()
{
  int integer;
  std::cout << "Please enter a larger integer: ";
  std::cin >> integer;
  std::cout << "\n";
  return integer;
}
