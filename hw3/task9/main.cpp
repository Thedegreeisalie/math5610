#include <iostream>
#include <vector>

std::vector<std::vector<double>> generateSymetricNbyNMatrix(int n);

int main(int argc, char *argv[]) {
	

	std::vector<std::vector<double>> nByMMatrix;
	int n = std::stoi(argv[1]);
	nByMMatrix = generateSymetricNbyNMatrix(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
				std::cout << nByMMatrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}

