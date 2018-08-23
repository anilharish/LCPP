/*
  1. Request the user to enter two floating point numbers stored as doubles input1 and input2
  2. Request the user to enter the operator inbetween the two numbers stored as characters
  3. Write a function to calculate the operation and return the result in double.
  4. Write a function to print the output
*/

#include "quiz2header.h"

int main()
{
  double input1{0};
  input1=userinput(1);
  char inputop;
  inputop=userop();
  double input2{0};
  input2=userinput(2);
  double output{0};
  output=operation(input1,input2,inputop);
  printoutput(output);
}
