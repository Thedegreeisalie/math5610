#include "scaleMatrix.h"

//Task: Write a routine that will generate a random matrix of a given size. That is, input the number of rows and columns and output the matrix created by setting each entry in the matrix to a random value between zero and one. 

std::vector<std::vector<double>> scaleMatrix(std::vector<std::vector<double>> matrix, int scale) {
	//Have to do some seeding for this to generate some numbers	
	//allocate the space
	std::vector<double> first = matrix.front();
	std::vector<std::vector<double>> product;
	for (int i = 0; i < matrix.size(); i++) {
		std::vector<double> Row;
		for (int j = 0; j < first.size(); j++) {
			Row.push_back(0.0);
		}
		product.push_back(Row);
	}
	//inialize each value
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < first.size(); j++) {
			// the number needs to be betwen 0 and 1 do some seeding of the random generator as well
			product[i][j] = matrix[i][j]*scale;
		}
	}
	//return a pointer to the array
	return product;
}
