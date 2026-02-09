#include<iostream>
#include<cmath>

int main(int argc, char *argv[]) {
    double x;
    while(std::cin >> x){
        std::cout << "x = " << x << ", ";
        std::cout << "sin(x) = " << std::sin(x) << ", ";
        std::cout << "cos(x) = " << std::cos(x) << std::endl;
    }
return 0;}