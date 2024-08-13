#include <string>     // std::string, std::stoull
#include <print>

int main ()
{
  std::string str = "8246821 0xffff 020 -1";

  std::string::size_type sz = 0;   // alias of size_t

  while (!str.empty()) {
    unsigned long long ull = std::stoull (str,&sz,0);

    std::print("{0} interpreted as {1}\n",str.substr(0,sz),ull);
    str = str.substr(sz);
  }

  return 0;
}