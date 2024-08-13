#include <string>     // std::string, std::stod
#include <print>

int main ()
{
  std::string orbits ("365.24 29.53");
  std::string::size_type sz;     // alias of size_t

  double earth = std::stod (orbits,&sz);
  double moon = std::stod (orbits.substr(sz));
  std::print("The moon completes {0} orbits per Earth year.\n ",(earth/moon));
  return 0;
}