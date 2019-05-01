#include "matrixVectorProduct.h"

//Task: Implement a method that will compute the solution of a square linear system of equations where the coefficient matrix is a upper triangular matrix.
std::vector<double> matrixVectorProduct(std::vector<std::vector<double>> matrix, std::vector<double> x) {
	
	std::vector<double> b;

	for (int i = 0; i < x.size(); i++) {
		b.push_back(0.0);
	}

	for (int i = 0; i < x.size(); i++) {
		double sum = 0.0;
		for (int j = 0; j < x.size(); j++) {
			sum += x[j]*matrix[i][j];
		}
		b[i] = sum;
	}

	return b;
}
