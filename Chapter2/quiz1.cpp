/* 1. Get input as an integer from the user.
   2. Compare the integer to the prime numbers 2,3,5, and 7 using if statements.
   3. If 1 is entered print its not prime nor composite number.
   4. If more than one integer has been entered print to enter only 1 integer.
   5. Print ouputs. develop functions for printing the result */

#include <iostream>

void printnpoc();
void printprime();
void printcomp();

int main ()
{
  int a{0};
  std::cout << "Please enter the number you want to check between 0 and 9: \n";
  std::cin >> a;

  if (a==0)
    {
      printnpoc();
    }
  else if (a==1)
    {
      printnpoc();
    }
  else if (a==2)
    {
      printprime();
    }
  else if (a==3)
    {
      printprime();
    }
  else if (a==4)
    {
      printcomp();
    }
  else if (a==5)
    {
      printprime();
    }
  else if (a==6)
    {
      printcomp();
    }
  else if (a==7)
    {
      printprime();
    }
  else if (a==8)
    {
      printcomp();
    }
  else if (a==9)
    {
      printcomp();
    }
  else
    {
      std::cout << "Please enter a single digit number from 0 to 9 \n";
    }
}

void printnpoc()
{
  std::cout << "The number you entered is not prime nor composite \n";
}

void printprime()
{
  std::cout << "The number you entered is a prime number \n";
}

void printcomp()
{
  std::cout << "The number you entered is a composite number \n";
}
