#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<double> solveDiagonal(std::vector<double> matrix, std::vector<double> b);

int main(int argc, char *argv[]) {


	std::vector<double> diagonalMatrix;

	std::vector<double> b;
	std::vector<double> x;

	int n = std::stoi(argv[1]);

	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	std::vector<std::vector<double>> matrix;

	for (int i =0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		double value = unif(re);
		diagonalMatrix.push_back(value);
	}

	for (int i =0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		double value = unif(re);
		b.push_back(value);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if( i == j) {
				std::cout << diagonalMatrix[i] << " ";
			}
			else {
				std::cout << " 0 ";
			}
		}
		std::cout << std::endl;
	}
	
	std::cout << " is the origininal matrix" << std::endl;
	
	for (int i = 0; i < n; i++) {
		std::cout << b[i] << std::endl;
	}

	std::cout << " is the target values" << std::endl;
	
	x = solveDiagonal(diagonalMatrix, b);	
	
	for (int i = 0; i < n; i++) {
		std::cout << x[i] << std::endl;
	}

	std::cout << " is the solution " << std::endl;


	return 0;
}
