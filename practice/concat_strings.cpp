#include <iostream>

int main() {
  std::string first = "Hello ";
  std::string second = "World";
  std::string buffer = first + second;
  std::cout << buffer << "\n";
  
  std::vector<int> x {3,2,1,4,5,6};
    vectorSubrange<int> xs(x,2,3);
    std::vector<int>::iterator i = begin(xs);
    std::cout << *i << " " << *(i+2) << std::endl;
    
    constVectorSubrange<int> xss(x,2,-1);
    std::vector<int>::const_iterator it = begin(xss);
    std::cout << *it << " " << *(it+2) << std::endl;

    for ( auto ii=begin(xss); ii!=end(xss); ++ii)
        std::cout << *ii << ",";
    std::cout << std::endl;

    for ( auto ii : xss )
        std::cout << ii << ",";
    std::cout << std::endl;
}
