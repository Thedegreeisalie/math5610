#include "matrixProduct.h"

std::vector<std::vector<double>> matrixProduct(std::vector<std::vector<double>> v1, std::vector<std::vector<double>> v2) {

	std::vector<std::vector<double>> product;

	int cols1 = v1.front().size();
	int cols2 = v2.front().size();
	int rows1 = v1.size();
	int rows2 = v2.size();
	
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
