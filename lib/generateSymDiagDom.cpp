#include "generateSymDiagDom.h"

std::vector<std::vector<double>> generateSymDiagDom(int n){ 

	std::vector<std::vector<double>> matrix = generateSymetricNbyNMatrix(n);

	for(int i = 0; i < n; i++) {
		double max = 0.0;
		int tmpIndex = 0;
		for(int j = 0; j < n; j++) {
			if(std::abs(max) < std::abs(matrix[j][i])) {
				max = matrix[j][i];
				tmpIndex = j;
			}	
		}
		if(max > matrix[i][i]) {
			double tmpDouble = matrix[i][i];
			matrix[i][i] = max;
			matrix[tmpIndex][i] = tmpDouble;
			matrix[i][tmpIndex] = tmpDouble;
		}
	}

	return matrix;
}
