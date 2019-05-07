#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> generateNbyMmatrix(int,int);
std::vector<std::vector<double>> transpose(std::vector<std::vector<double>>);

int main(int argc, char *argv[]) {

	int n = std::stoi(argv[1]);
	int m = std::stoi(argv[2]);
	
	std::vector<std::vector<double>> Matrix = generateNbyMmatrix(n, m);
	std::vector<std::vector<double>> lu = transpose(Matrix);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << Matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	std::cout << "Is the original matrix, A" << std::endl;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << lu[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	std::cout << "Is the transposed matrix" << std::endl;


	
	return 0;
}
