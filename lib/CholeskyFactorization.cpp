#include "CholeskyFactorization.h"

std::vector<std::vector<double>> CholeskyFactorization(std::vector<std::vector<double>> matrix) {
	
	int n = matrix.front().size();

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

	//matrix[n][n] = sqrt(matrix[n][n]);
	return matrix;
}
