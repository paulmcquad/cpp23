#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <print>
 
int main()
{
    const auto data =
    {
        "45",
        "+45",
        " -45",
        "3.14159",
        "31337 with words",
        "words and 2",
        "12345678901",
    };
 
    for (const std::string s : data)
    {
        std::size_t pos{};
        try
        {
            std::print("std::stoi({0}): ", s);
            const int i{std::stoi(s, &pos)};
            std::print("{0}; pos: {1}\n",i,pos);
        }
        catch (std::invalid_argument const& ex)
        {
            std::print("std::invalid_argument::what(): {0}\n",ex.what());
        }
        catch (std::out_of_range const& ex)
        {
            std::print("std::out_of_range::what(): {0}\n",ex.what());
            const long long ll{std::stoll(s, &pos)};
            std::print("std::stoll({0}): {1}; pos:): {2}\n",s,ll,pos);
        }
    }
 
    std::print("\nCalling with different radixes:\n");
    for (const auto& [s, base] : {std::pair<const char*, int>
        {"11",  2}, {"22",  3}, {"33",  4}, {"77",  8},
        {"99", 10}, {"FF", 16}, {"jJ", 20}, {"Zz", 36}})
    {
        const int i{std::stoi(s, nullptr, base)};
        std::print("std::stoi({0}, nullptr, {1}): {2}\n",s,base,i);
    }
}