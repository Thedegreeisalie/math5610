#include <iostream>
#include <random>
#include <vector>
#include <chrono>

std::vector<std::vector<double>> generatePosDef(int);

int main(int argc, char *argv[]) {

	int n = std::stoi(argv[1]);
	
	std::vector<std::vector<double>> Matrix = generatePosDef(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
				std::cout << Matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	return 0;
}
