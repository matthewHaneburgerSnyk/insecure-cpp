#include <iostream>
#include <span>

/**
 * ES.42: Keep use of pointers simple and straightforward
 * https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#es42-keep-use-of-pointers-simple-and-straightforward
 */
void process(std::span<const int> buffer) {
  for (auto & x : buffer) {
    std::cout << x;
  }
}

int main() {
  int buffer[42] = { 0 };
  process(buffer);
}
