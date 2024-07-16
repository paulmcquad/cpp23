//***********************************************************
// LeapYear program
// This program inputs a year and prints whether the year
// is a leap year or not
//***********************************************************
 
#include <iostream>          // Access output stream
#include <print>
 
// Function must be declared before being used.
bool IsLeapYear(int year);
 
int main()
{
  int year{0};                  // Year to be tested
  std::print( "Enter a year, for example: 2000: ");
  std::cin >> year;               // Read year
 
  if (IsLeapYear(year))      // Test for leap year
    std::print("{0} is a leap year.\n", year);
  else
    std::print("{0} is not a leap year.\n", year);
 
  return 0;                 // Indicate successful completion
}
 
// Function definition
bool IsLeapYear(int year)
// IsLeapYear returns true if year is a leap year and
// false otherwise. 
{
  if (year % 4 != 0)    // Is year not divisible by 4?
    return false;       // If so, can't be a leap year
                        // Must be divisible by 4 at this point
  if (year % 100 != 0)  // Is year not a multiple of 100?
    return true;        // If so, is a leap year
                        // Must be divisible by 100 at this point
  if (year % 400 != 0)  // Is year not a multiple of 400?
    return false;       // If so, then is not a leap year
                        // Must be divisible by 400 at this point
  return true;          // Is a leap year
}



