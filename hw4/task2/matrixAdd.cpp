#include "matrixAdd.h"

std::vector<std::vector<double>> matrixAdd(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2) {

	std::vector<std::vector<double>> product;

	std::vector<double> first = m1.front();

	int cols = first.size();
	int rows = m1.size();
	for(int i = 0; i < rows; i++) {	
		std::vector<double> Row;
		for(int j = 0; j < cols; j++){
			Row.push_back(0.0);
		}
		product.push_back(Row);
	}

	for(int i = 0; i < rows; i++) {	
		for(int j = 0; j < cols; j++){
			product[i][j] = m1[i][j] + m2[i][j] ; 
		}
	}

	return product;
}
