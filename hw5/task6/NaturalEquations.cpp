#include "NaturalEquations.h"

std::vector<double> NaturalEquations(std::vector<std::vector<double>> matrix, std::vector<double> b) {
	
	int n = matrix.front().size();

	std::vector<std::vector<double>> B = matrixProduct(transpose(matrix), matrix);

	std::vector<double> y = matrixVectorProduct(transpose(matrix), b);
	
	std::vector<std::vector<double>> L = CholeskyFactorization(B);	
		
	std::vector<double> z = solveLowerTriangular(L, y);
	
	std::vector<double> x = solveUpperTriangular(transpose(L), z);

	return x;
}
