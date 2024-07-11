#include <iostream>
#include <print>

int main() {

    int  n{0};

    std::print("Enter a number from 20 to 99: ");
    std::cin >> n;
    int tens_digits = n / 10;
    int units_digits = n % 10;
    switch(tens_digits) {
      case 2: std::print("twenty "); break;
      case 3: std::print("thirty "); break;
      case 4: std::print("forty "); break;
      case 5: std::print("fifty "); break;
      case 6: std::print("sixty "); break;
      case 7: std::print("seventy "); break;
      case 8: std::print("eighty "); break;
      case 9: std::print("ninety "); break;
    }
    switch(units_digits) {
      case 1: std::print("one "); break;
      case 2: std::print("two "); break;
      case 3: std::print("three "); break;
      case 4: std::print("four "); break;
      case 5: std::print("five "); break;
      case 6: std::print("six "); break;
      case 7: std::print("seven "); break;
      case 8: std::print("eight "); break;
      case 9: std::print("nine "); break;
    }
		return 0;
}
