#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> genererateNbyMmatrix(int rows, int cols);
std::vector<std::vector<double>> scaleMatrix(std::vector<std::vector<double>> matrix, int m );

int main(int argc, char *argv[]) {


	std::vector<std::vector<double>> nBymMatrix;
	std::vector<std::vector<double>> product;

	int rows = std::stoi(argv[1]);
	int cols = std::stoi(argv[2]);
	int scale = std::stoi(argv[3]);

	nBymMatrix = genererateNbyMmatrix(rows,cols);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
				std::cout << nBymMatrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << " is the origininal matrix" << std::endl;
	product = scaleMatrix(nBymMatrix, scale);	
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
				std::cout << product[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << " is the scaled matrix" << std::endl;


	return 0;
}
