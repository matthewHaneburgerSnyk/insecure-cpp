#include <iostream>
#include <iterator>

/**
 * ES.42: Keep use of pointers simple and straightforward
 * https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#es42-keep-use-of-pointers-simple-and-straightforward
 */
void decay(const int * ages) {
  // Size of the pointer = 8
  std::cout << sizeof(ages) << '\n';
  // Compile Error
  // std::cout << std::size(ages) << '\n';
}

int main() {
  int ages[] = { 15, 30, 60 };
  // Number of elements = 3
  std::cout << std::size(ages) << '\n';
  // Size of an element = 4
  std::cout << sizeof(ages[0]) << '\n';
  // Size of array = 12 (= 3 * 4)
  std::cout << sizeof(ages) << '\n';
  decay(ages);
}
