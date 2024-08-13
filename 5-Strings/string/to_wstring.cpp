#include <iostream>
#include <string>
//#include <print> - Future use

int main()
{
    for (const double f : {23.43, 1e-9, 1e40, 1e-40, 123456789.0})

//Works
//       std::print("print:\t\t{0}\n", (std::to_string(f)));
// Doesn't
//       std::print("print:\t\t{0}\n", (std::to_wstring(f)));


        std::wcout << "std::wcout: " << f << '\n'
                  << "to_wstring: " << std::to_wstring(f) << "\n\n";
}