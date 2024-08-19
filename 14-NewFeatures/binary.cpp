#include <iostream>
#include <bitset>
using namespace std;

int main()
{

     bitset<8> a(0b1111'0000 & 0b1001'0000);
     bitset<8> b(0b1111'0000 | 0b1001'0000);
     bitset<8> c(0b1010'1010 & 0b1000'1111);
     bitset<8> d(0b1010'1010 | 0b1000'1111);
     cout << a << endl;
     cout << b << endl;
     cout << c << endl;
     cout << d << endl;
}
