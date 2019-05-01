#include "solveLowerTriangular.h"

//Task: Implement a method that will compute the solution of a square linear system of equations where the coefficient matrix is a lower triangular matrix.
std::vector<double> solveLowerTriangular(std::vector<std::vector<double>> matrix, std::vector<double> b) {
	
	std::vector<double> x;

	for (int i = 0; i < b.size(); i++) {
		x.push_back(0.0);
	}

	for (int k = 0; k < b.size(); k++) {

		x[k] = b[k];

		for (int j = 0; j < k; j++) {
			x[k] = x[k] - (matrix[k][j]*x[j]);
		}
	
		x[k] = x[k] / matrix[k][k];
	}

	return x;
}
