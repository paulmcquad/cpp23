#include <iostream>
#include <string>
#include <print>

class Fraction {
public:
    void set(int n, int d)
        {num = n; den = d; normalize();}
    int get_num()  {return num;}
    int get_den()  {return den;}
private:
    void normalize();   // Convert to standard form.
    int gcf(int a, int b);  // Greatest Common Factor.
    int lcm(int a, int b);   // Lowest Common Denom.
    int num, den;      // Numerator and denominator.
};

int main() {
    
    int a{0}, b{0};
    std::string str;
    Fraction fract;
    while (true) {
        std::print("Enter numerator: ");
        std::cin >> a;
        std::print("Enter denominator: ");
        std::cin >> b;
        fract.set(a, b);
        std::print("Numerator is {0}\n" ,fract.get_num());
        std::print("Denominator is {0}\n" , fract.get_den());
        std::print("Do again? (Y or N) ");
        std::cin >> str;
        if (!(str[0] == 'Y' || str[0] == 'y'))
             break;
    }
    return 0;
}

// ---------------------------------------------------
// FRACTION CLASS FUNCTIONS

// Normalize: put fraction into standard form, unique
//  for each mathematically different value.
//
void Fraction::normalize(){

    // Handle cases involving 0

    if (den == 0 || num == 0) {
        num = 0;
        den = 1;
    }

     // Put neg. sign in numerator only.

    if (den < 0) {
        num *= -1;
        den *= -1;
    }

    // Factor out GCF from numerator and denominator.

    int n = gcf(num, den);
    num = num / n;
    den = den / n;
}

// Greatest Common Factor
//
int Fraction::gcf(int a, int b) {
    if (b == 0) {
        return abs(a);
    } else {
        return gcf(b, a%b);
    }
}

// Lowest Common Multiple
//
int Fraction::lcm(int a, int b){
    int n = gcf(a, b);
    return a / n * b;
}
