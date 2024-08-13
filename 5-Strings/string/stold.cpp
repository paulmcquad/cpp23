#include <string>     // std::string, std::stod
#include <print>

int main ()
{
  std::string orbits ("90613.305 365.24");
  std::string::size_type sz;     // alias of size_t

  long double pluto = std::stod (orbits,&sz);
  long double earth = std::stod (orbits.substr(sz));
  std::print("Pluto takes {0} years to complete an orbit.\n",(pluto/earth));
  return 0;
}