#include "solveUpperTriangular.h"

//Task: Implement a method that will compute the solution of a square linear system of equations where the coefficient matrix is a upper triangular matrix.
std::vector<double> solveUpperTriangular(std::vector<std::vector<double>> matrix, std::vector<double> b) {
	
	std::vector<double> x;

	for (int i = 0; i < b.size(); i++) {
		x.push_back(0.0);
	}

	for (int k = b.size()-1; k >= 0; k--) {

		x[k] = b[k];

		for ( int j = k+1; j < matrix.size(); j++) {
			x[k] = x[k] - (matrix[k][j]*x[j]);
		}
	
		x[k] = x[k] / matrix[k][k];
	}

	return x;
}
