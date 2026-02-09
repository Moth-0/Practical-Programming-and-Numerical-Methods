#include<iostream>
#include"vec.h"

int main() {
    pp::vec a {1, 2, 3};
    pp::vec b {2, 3, 4};
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    pp::vec c = a + b;
    std::cout << "a + b= " << c << std::endl;
    std::cout << "a = " << a << std::endl;
    pp::vec d = 2 * b;
    std::cout << "2*b= " << d << std::endl;
    d /= 4;
    std::cout << "b/2 = " << d << std::endl;
return 0; }