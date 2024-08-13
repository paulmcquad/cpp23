#include <string>     // std::string, std::stof
#include <print>

int main ()
{
  std::string orbits ("686.97 365.24");
  std::string::size_type sz;     // alias of size_t

  float mars = std::stof (orbits,&sz);
  float earth = std::stof (orbits.substr(sz));
  std::print("One martian year takes {0} Earth years.\n", (mars/earth));
  return 0;
}