#include <iostream>
#include <vector>

std::vector<std::vector<double>> generatePosDef(int);
std::vector<std::vector<double>> generateSymetricNbyNMatrix(int, int);

int main(int argc, char *argv[]) {
	
	int n = std::stoi(argv[1]);
	std::vector<std::vector<double>> nByMMatrix = generateSymetricNbyNMatrix(n,n);
//	nByMMatrix = generatePosDef(n);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//				std::cout << nByMMatrix[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
	
	return 0;
}

