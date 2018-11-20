#include <iostream>
#include <string>

int main()
{
  std::string name;
  double age{},length{};

  std::cout << "Please enter your First Name and Last Name with a space: ";
  std::getline(std::cin, name);
  std::cout << "\nPlease enter your age: ";
  std::cin >> age;
  std::cout << "\n";

  length=name.length()-1;

  std::cout << "Number of letters in your name: " << length <<"\n";  
  std::cout << "You have lived: " << age/length << " years for each letter in your name. \n";
  return 0;
}
