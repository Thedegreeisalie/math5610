#include "LUFactorization.h"

std::vector<std::vector<double>> LUFactorization(std::vector<std::vector<double>> matrix) {
	
	int n = matrix.front().size();
	
	std::vector<std::vector<double>> l;

	for (int k = 0; k < n; k++) {
		std::vector<double> row;
		for (int i = 0; i < n; i++) {
			if(i != k) {
				row.push_back(0.0);
			}
			else {
				row.push_back(1.0);
			}
		}
		l.push_back(row);
	}

	for (int k = 0; k < n-1; k++) {
		for (int i = k+1; i < n; i++) {
			l[i][k] = (matrix[i][k] / matrix[k][k]);
			for (int j = k; j < n; j++) {
				matrix[i][j] =  matrix[i][j] - (l[i][k] * matrix[k][j]);
			}
			matrix[i][k] = l[i][k];
		}
	}

	return l;
}
