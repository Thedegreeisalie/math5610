#include "NaturalEquations.h"

std::vector<double> NaturalEquations(std::vector<std::vector<double>> matrix, std::vector<double> b) {
	
	int n = matrix.front().size();

	std::vector<double> x;
	std::vector<double> y;
	std::vector<double> z;
	
	std::vector<std::vector<double>> aT;	

	for (int i = 0; i < n; i++) {
		std::vector<double> Row;
		for (int j = 0; j < n; j++) {
			Row.push_back(matrix[j][i]);
		}
		aT.push_back(Row);
	}

	for (int k = 0; k < n-1; k++) {
		matrix[k][k] = sqrt(abs(matrix[k][k]));
		for (int i = k+1; i < n; i++) {
			matrix[i][k] = matrix[i][k]/matrix[k][k];
		}
		for (int j = k+1; j < n; j++) {
			for (int i = j; i < n; i++) {
				matrix[i][j] = matrix[i][j] - matrix[i][k]*matrix[j][k];
			}
		}
	}
	
	std::vector<std::vector<double>> gT;	
	for (int i = 0; i < n; i++) {
		std::vector<double> Row;
		for (int j = 0; j < n; j++) {
			Row.push_back(matrix[j][i]);
		}
		gT.push_back(Row);
	}
	
	y = matrixVectorProduct(aT, b);
	
	z = solveLowerTriangular(matrix, y);
	
	x = solveUpperTriangular(gT, z);

	return x;
}
