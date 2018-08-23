#include<iostream>

bool checkpassword(int x);
int userinput();

int main()
{
  int a,b;
  a=userinput();
  b=checkpassword(a);

  if (b)
    {
      std::cout << "The password you entered was correct. Please access the document here: You Suck \n";
    }
  else
    {
      std::cout << "WARNING: YOU DIDNT SAY THE MAGIC NUMBERS. YOUR COMPUTER WILL SELF DESTRUCT IN 5....4.....3.....2.....1.....KABOOOOOM !!!! \n";
    }
}

bool checkpassword(int x)
{
  int y{1234};
  return (x==y);
}

int userinput()
{
  int x;
  std::cout << "Please enter a 4 digit password to access the file: \n";
  std::cin >> x;
  return x;
}
