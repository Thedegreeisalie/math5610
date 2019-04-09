#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> genererateNbyMmatrix(int n, int m);

int main(int argc, char *argv[]) {


	std::vector<std::vector<double>> nBymMatrix;
	int n = std::stoi(argv[1]);
	int m = std::stoi(argv[2]);
	nBymMatrix = genererateNbyMmatrix(n,m);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
				std::cout << nBymMatrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
