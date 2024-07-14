#include <iostream>
#include <print>

int main () {
   // Local variable declaration:
   int a{10};

   // do loop execution
   LOOP:do {
      if(a == 13 || a == 14) {
         // skip the iteration.
         a++;
         goto LOOP;
      }
      std::print("value of a: {0}\n", a);
      a++;
   } 
   while(a < 16);
 
   return 0;
}