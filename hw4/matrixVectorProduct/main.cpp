#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> generateSymetricNbyNMatrix(int);
double absError2NormVector(std::vector<double>, std::vector<double>);
std::vector<double> matrixVectorProduct(std::vector<std::vector<double>>, std::vector<double>);

int main(int argc, char *argv[]) {

	std::vector<double> b;
	std::vector<double> x;

	int n = std::stoi(argv[1]);
	std::vector<std::vector<double>> matrix = generateSymetricNbyNMatrix(n);

	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	for (int i =0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		double value = unif(re);
		x.push_back(value);
	}
	
	b = matrixVectorProduct(matrix, x);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	std::cout << "Is the original matrix" << std::endl;
	
	for (int i = 0; i < n; i++) {
		std::cout << x[i] << std::endl;
	}

	std::cout << "Is the vector" << std::endl;
	
	for (int i = 0; i < n; i++) {
		std::cout << b[i] << std::endl;
	}

	std::cout << "Is the solution " << std::endl;
	

	return 0;
}
