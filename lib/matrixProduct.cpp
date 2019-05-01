#include "matrixProduct.h"

std::vector<std::vector<double>> matrixProduct(std::vector<std::vector<double>> v1, int rows1, int cols1, std::vector<std::vector<double>> v2, int rows2 ,int cols2) {

	std::vector<std::vector<double>> product;
	
	for (int i = 0; i < cols1; i++) {
		std::vector<double> row;
		for (int j = 0; j < rows2; j++){
			row.push_back(0.0);
		}
		product.push_back(row);
	}

	int prodSize = cols1;
	for(int i = 0; i < cols1; i++) {	
		for(int j = 0; j < rows2; j++){
			std::vector<double> col;
			for (int k = 0; k < rows2; k++){
				col.push_back(v2[k][j]);
			}
			product[i][j] = dotVector(v1[i], col) ; 
		}
	}

	return product;
}
