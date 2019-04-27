// Task:Implement a method that will compute the ∞-norm of an arbitrary vector will real number entries. Add an entry to your for the method you create 
#include "generateSymetricNbyNMatrix.h"

std::vector<std::vector<double>> generateSymetricNbyNMatrix(int n){ 
	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	std::vector<std::vector<double> > matrix;
	for (int i = 0; i < n; i++) {
		std::vector<double> Row;
		// allocate space
		for (int j = 0; j < n; ++j) {
			Row.push_back(0.0);
		}
		matrix.push_back(Row);
	}
	for (int i =0; i < n; i++) {
		for(int j =0; j < n; j++) {
			std::uniform_real_distribution<double> unif(1, 0);
			clock::duration d = clock::now() - begining;
			std::default_random_engine re (d.count());
			double value = unif(re);
			matrix[i][j] = value;
			matrix[j][i] = value;
		}
	}
	return matrix;
}
//
