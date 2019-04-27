#include "solveDiagonal.h"

//Task: Implement a method that will compute the solution of a square linear system of equations where the coefficient matrix is a diagonal matrix.
std::vector<double> solveDiagonal(std::vector<double> matrix, std::vector<double> b) {
	
	std::vector<double> x;

	for (int i = 0; i < matrix.size(); i++) {
		x.push_back(b[i]/matrix[i]);
	}

	return x;
}
