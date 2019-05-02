#include "generateNbyMMatrix.h"

//Task: Write a routine that will generate a random matrix of a given size. That is, input the number of rows and columns and output the matrix created by setting each entry in the matrix to a random value between zero and one. 

std::vector<std::vector<double>> generateNbyMmatrix(int rows, int cols) {
	//Have to do some seeding for this to generate some numbers	
	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	std::random_device rand_dev;
	std::mt19937 generator(rand_dev());
	std::uniform_real_distribution<double> unif(1, 0);

	//allocate the space
	std::vector<std::vector<double> > matrix;
	for (int i = 0; i < rows; i++) {
		std::vector<double> Row;
		for (int j = 0; j < cols; j++) {
			Row.push_back(0.0);
		}
		matrix.push_back(Row);
	}
	//inialize each value
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			// the number needs to be betwen 0 and 1 do some seeding of the random generator as well
			matrix[i][j] = unif(generator);
		}
	}
	//return a pointer to the array
	return matrix;
}
