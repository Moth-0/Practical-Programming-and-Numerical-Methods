#include <iostream>
#define _USE_MATH_DEFINES // For math constants
#include <cmath>
#include "sfuns.h"


int main() {
    double a = std::sqrt(2);
    double b = std::pow(2, 0.2); // No fractions in c++
    double c = std::exp(M_PI);
    double d = std::pow(M_PI, M_E);

    std::cout << "Sqrt(2) = " << a << std::endl;
    std::cout << "2^1/5 = " << b << std::endl;
    std::cout << "e^π = " << c << std::endl;
    std::cout << "π^e = " << d << std::endl;
    std::cout << std::endl;

    for (double i = 1; i <= 10; i++) {
        std::cout << "Γ" << i << " = " << sfuns::fgamma(i) << std::endl;
    }
    return 0;
}