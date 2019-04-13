#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> genererateNbyMmatrix(int rows, int cols);

int main(int argc, char *argv[]) {


	std::vector<std::vector<double>> nBymMatrix;

	int rows = std::stoi(argv[1]);
	int cols = std::stoi(argv[2]);

	nBymMatrix = genererateNbyMmatrix(rows,cols);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
				std::cout << nBymMatrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
