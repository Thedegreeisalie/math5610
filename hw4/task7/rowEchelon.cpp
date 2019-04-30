#include "rowEchelon.h"

// Task: Implement a method that will perform elementary row operations on a matrix to take the matrix to row echelon form. The resulting matrix should be upper triangular through the rows. If the matrix is not a square matrix, define an appropriate output for the method tha will return the row echelon form. Add an entry to your software manual documenting the method.
std::vector<std::vector<double>> rowEchelon(std::vector<std::vector<double>> matrix) {
	
	int n = matrix.front().size();
	//start with the first row

	for (int k = 0; k < n-1; k++) {
		for (int i = k+1; i < n; i++) {
			double factor = (matrix[i][k] / matrix[k][k]);
			for (int j = k; j < n; j++) {
				matrix[i][j] =  matrix[i][j] - (factor * matrix[k][j]);
			}
		//	b[i] = b[i] - factor*b[i];
		}
	}

	return matrix;
}
