#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> generateSymetricNbyNMatrix(int);
double absError2NormVector(std::vector<double>, std::vector<double>);
std::vector<double> matrixVectorProduct(std::vector<std::vector<double>>, std::vector<double>);

std::vector<double> solveUpperTriangular(std::vector<std::vector<double>> matrix, std::vector<double> b);

int main(int argc, char *argv[]) {

	std::vector<double> b;
	std::vector<double> x;

	int n = std::stoi(argv[1]);
	
	std::vector<std::vector<double>> upperTriangularMatrix = generateSymetricNbyNMatrix(n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if( i > j) {
				 upperTriangularMatrix[i][j] = 0.0;
			}
		}
	}

	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	for (int i =0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		double value = unif(re);
		b.push_back(value);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << upperTriangularMatrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	std::cout << "Is the original matrix, A" << std::endl;
	
	for (int i = 0; i < n; i++) {
		std::cout << b[i] << std::endl;
	}

	std::cout << "Is the target values, b" << std::endl;
	
	x = solveUpperTriangular(upperTriangularMatrix, b);	
	
	for (int i = 0; i < n; i++) {
		std::cout << x[i] << std::endl;
	}

	std::cout << "Is the solution, x" << std::endl;
	
	std::vector<double> approxB = matrixVectorProduct(upperTriangularMatrix, x);

	for (int i = 0; i < n; i++) {
		std::cout << approxB[i] << std::endl;
	}

	std::cout << "Is Ax" << std::endl;

	std::cout << "The error between Ax and b  is: " << 	absError2NormVector(approxB, x) << std::endl;

	return 0;
}
