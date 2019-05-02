#include "generatePosDef.h"

std::vector<std::vector<double>> generatePosDef(int n) { 

	std::vector<std::vector<double>> matrix = generateNbyMmatrix(n, n);

	for(int i = 0; i < n; i++){
		std::vector<double> row;
		for(int j = 0; j < n; j++){
			if( i > j) {
				matrix[i][j] = 0.0;
			}	
		}
	}

	std::vector<std::vector<double>> transpose;

	for(int i = 0; i < n; i++){
		std::vector<double> row;
		for(int j = 0; j < n; j++){
			 row.push_back(matrix[j][i]);
		}
		transpose.push_back(row);
	}

	std::vector<std::vector<double>> posDef = matrixProduct(matrix,transpose);

	return posDef;
}
