#include "generatePosDef.h"

std::vector<std::vector<double>> generatePosDef(int n) { 

	std::vector<std::vector<double>> matrix = generateNbyMMatrix(n, n);
	std::vector<std::vector<double>> transpose = matrix;

	for(int i =0; i < n; i++){
		for(int j =0; j < n; j++){
			transpose[j][i] = matrix[i][j];
		}
	}

//	std::vector<std::vector<double>> posDef = matrixProduct(transpose, matrix);

	return transpose;
}
