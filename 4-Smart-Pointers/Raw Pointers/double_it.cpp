#include <print>

void double_it(int *p);

int main() {

   int a{5}, b{6};

   std::print("Val. of a before doubling: {0}\n", a);
   std::print("Val. of b before doubling: {0}\n", b);

   double_it(&a);      // Pass address of a.
   double_it(&b);      // Pass address of b.

   std::print("Val. of a after doubling: {0}\n", a);
   std::print("Val. of b after doubling: {0}\n", b);

   return 0;
}

void double_it(int *p) {
   *p = *p * 2;
}
