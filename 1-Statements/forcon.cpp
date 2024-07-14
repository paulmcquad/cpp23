#include <iostream>
#include <print>

int main() {
    int myNumbers[5] = {1, 2, 3, 4, 5};

    // For Each Loop - Iteration Statement (C++11)
    for (int i : myNumbers) {
      // 4 will be skipped over
      if (i == 4) {
        continue;
      }
      std::print("{0}\n", i);
    }

    return 0;
}

