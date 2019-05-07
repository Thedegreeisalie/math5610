#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> generatePosDef(int);
std::vector<double> NaturalEquations(std::vector<std::vector<double>> matrix, std::vector<double> b);
std::vector<double> matrixVectorProduct(std::vector<std::vector<double>>, std::vector<double>);

int main(int argc, char *argv[]) {

	int n = std::stoi(argv[1]);
	
	std::vector<std::vector<double>> Matrix = generatePosDef(n);

	std::vector<double> b;
	std::vector<double> approxB;
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

	x = NaturalEquations(Matrix, b);

	approxB = matrixVectorProduct(Matrix, x);

	for(int i =0; i < n; i++) {
		std::cout << b[i] << " " << approxB[i] << std::endl;
	}
	
	return 0;
}
