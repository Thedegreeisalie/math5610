#include "transpose.h"

std::vector<std::vector<double>> transpose(std::vector<std::vector<double>> matrix) {
	
	int n = matrix.front().size();

	std::vector<std::vector<double>> transpose;

	for (int k = 0; k < n; k++) {
		std::vector<double> row; 
		for (int i = 0; i < n; i++) {
			row.push_back(matrix[i][k]);
		}
		transpose.push_back(row);
	}

	return transpose;
}
