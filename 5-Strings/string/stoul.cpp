// stoul example
#include <iostream>   // std::cin
#include <string>     // std::string, std::stoul, std::getline
#include <print>

int main ()
{
  std::string str;
  std::print("Enter an unsigned number: ");
  std::getline (std::cin,str);
  unsigned long ul = std::stoul (str,nullptr,0);
  std::print("You entered: {0}\n", ul);
  return 0;
}
