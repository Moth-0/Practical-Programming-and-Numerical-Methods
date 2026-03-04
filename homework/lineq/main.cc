#include<iostream>
#include<vector>
#include"matrix.h"
#include"QR.h"

int main () {
    // Check that decomp works 
    std::cout << "--- Decomp test ---\n" << std::endl; 
    pp::matrix A = {{4, 3, 5}, {1, 2, 2}, {9, 7, 3}};
    pp::QR result(A); 
    std::cout << "A = \n" << A << "\n\n";
    std::cout << "R = \n" << result.R << "\n\n";
    pp::matrix I = result.Q.T()*result.Q;
    std::cout << "QTQ = \n" << I << "\n\n";
    pp::matrix B = result.Q*result.R;
    std::cout << "QR = A = \n" << B << "\n\n";

    std::cout << "\n--- Solve test ---\n" << std::endl; 
    pp::vector b = {2, 8, 9};
    std::cout << "b = \n" << b << std::endl; 
    pp::vector x = result.solve(b);
    std::cout << "Ax=b => x = \n" << x << std::endl; 
    std::cout << "Ax = \n" << A*x << std::endl;

    std::cout << "\n--- det() test ---\n" << std::endl; 
    std::cout << "det(R) = \n±" << result.det() << std::endl;
    std::cout << "det(A) = \n" << A.determinant() << std::endl;

    std::cout << "\n--- Inverse test ---\n" << std::endl; 
    pp::matrix A_inv = result.inverse();
    std::cout << "A^-1 = \n" << A_inv << std::endl;
    std::cout << "A^-1A = \n" << A_inv*A << std::endl;

return 0;}