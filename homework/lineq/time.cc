#include"matrix.h"
#include"QR.h"

#include<string>
#include<random>

int main (int argc, char** argv) {
    size_t N = 3;
    for(int i=0;i<argc;i++){
		std::string arg=argv[i];
        std::cerr<<"i= "<<i<<" arg="<<arg<<"\n";
        if(arg=="-size" && i+1<argc) {
            // Convert the string to an unsigned long long, then cast to size_t
            N = static_cast<size_t>(std::stoi(argv[i+1]));
		}
    }
    std::cerr<<"N= "<< N << std::endl;

    pp::matrix A(N, N);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<long double> dist(-10.0, 10.0);

    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            // Assuming A(i, j) sets the row i, column j
            A(i, j) = dist(gen); 
        }
    }

    pp::QR result(A);

    return 0;
}