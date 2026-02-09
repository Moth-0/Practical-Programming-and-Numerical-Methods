#include<iostream>
#include<cmath>
#include<string>

int main(int argc, char *argv[]) {
    for(int i=1; i<argc; ++i){
        std::string arg = argv[i];
        if(arg == "-n" && i+1 < argc){
            double n = std::stod(argv[i+1]);
            std::cout << "n = " << n << std::endl;
            std::cout << "sin(n) = " << std::sin(n);
            std::cout << ", cos(n) = " << std::cos(n) << std::endl;
        }
    }
return 0;}