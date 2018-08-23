#include <iostream>

double userinput(int input)
{
  std::cout << "Please enter the floating point number" << input << " : \n";
  double number{0};
  std::cin >> number;
  return number;
}

char userop()
{
  std::cout << "Please enter the operator \"+\" or \"-\" or \"*\" or \"/\": \n";
  char inputchar;
  std::cin >> inputchar;
  return inputchar;
}

double operation(double input1, double input2, char inputop)
{
  if ( inputop == '+')
    return input1+input2;
  else if (inputop == '-')
    return input1-input2;
  else if (inputop == '*')
    return input1*input2;
  else if (inputop == '/')
    return input1/input2;
  else
    std::cout<< "User operator is invalid please enter a valid operator\n";
  return 0;
}

void printoutput(double output)
{
  std::cout << "The result of operation on two numbers is : " << output << "\n";
}


