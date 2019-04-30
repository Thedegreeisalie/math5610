#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> generateSymetricNbyNMatrix(int);

std::vector<double> rowEchelonSolution(std::vector<std::vector<double>> matrix, std::vector<double> b);

int main(int argc, char *argv[]) {

	int n = std::stoi(argv[1]);

	std::vector<double> b;
	std::vector<double> x;
	
	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	for (int i =0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		double value = unif(re);
		b.push_back(value);
	}

	std::vector<std::vector<double>> Matrix = generateSymetricNbyNMatrix(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << Matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	std::cout << "Is the original matrix, A" << std::endl;
	
	x = rowEchelonSolution(Matrix, b);

	for (int i = 0; i < n; i++) {
		std::cout << x[i] << std::endl;
	}

	std::cout << "Is the output vector x"  << std::endl;
	
	return 0;
}
