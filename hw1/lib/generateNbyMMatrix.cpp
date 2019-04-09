#include "generateNbyMMatrix.h"

//Task: Write a routine that will generate a random matrix of a given size. That is, input the number of rows and columns and output the matrix created by setting each entry in the matrix to a random value between zero and one. 

std::vector<std::vector<double>> genererateNbyMmatrix(int n, int m) {
	//Have to do some seeding for this to generate some numbers	
	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	//allocate the space
	std::vector<std::vector<double> > matrix;
	//inialize each value
	for (int i = 0; i < n; ++i) {
		std::vector<double> Row;
		for (int j = 0; j < n; ++j) {
			// the number needw to be betwen 0 and 1 do some seeding of the random generator as well
			std::uniform_real_distribution<double> unif(1, 0);
			clock::duration d = clock::now() - begining;
			std::default_random_engine re (d.count());
			Row.push_back(unif(re));
		}
		matrix.push_back(Row);
	}
	//return a pointer to the array
	return matrix;
}
