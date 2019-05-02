#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> generatePosDef(int);
std::vector<std::vector<double>> CholeskyFactorization(std::vector<std::vector<double>> matrix);

int main(int argc, char *argv[]) {

	int n = std::stoi(argv[1]);
	
	std::vector<std::vector<double>> Matrix = generatePosDef(n);
	std::vector<std::vector<double>> lu = CholeskyFactorization(Matrix);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << Matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	std::cout << "Is the original matrix, A" << std::endl;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if(i >= j ) {
				std::cout << lu[i][j] << " ";
			}
			else {
				std::cout << "   0.0   ";
			}
		}
		std::cout << std::endl;
	}
	
	std::cout << "Is the reduced matrix L" << std::endl;
	
	return 0;
}
