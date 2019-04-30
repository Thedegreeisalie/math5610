#include "rowEchelonSolution.h"

//Task: Using previous methods you have created, write a code that will solve a square linear system of equations using Gaussian elimination (elementary row operations) to reduce the augmented coefficient matrix to row echelon form and then apply backsubstitution to determine an approximate solution for the linear system
std::vector<double> rowEchelonSolution(std::vector<std::vector<double>> matrix, std::vector<double> b) {
	
	int n = matrix.front().size();

	for (int k = 0; k < n-1; k++) {
		for (int i = k+1; i < n; i++) {
			double factor = matrix[i][k] / matrix[k][k];
			for (int j = k; j < n; j++) {
				matrix[i][j] =  matrix[i][j] - (factor * matrix[k][j]);
			}
			b[i] = b[i] - factor*b[i];
		}
	}
	
	std::vector<double> x;
	x = solveUpperTriangular(matrix, b);

	return x;
}
