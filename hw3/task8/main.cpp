#include <vector>
#include <iostream>

std::vector<std::vector<double>> genererateNbyMmatrix(int n, int m);
std::vector<std::vector<double>> matrixProduct(std::vector<std::vector<double>>, std::vector<std::vector<double>>);

int main(int argc, char *argv[]) {	

	std::vector<std::vector<double>> nByMMatrix1;
	std::vector<std::vector<double>> nByMMatrix2;
	std::vector<std::vector<double>> product;
	
	int m = std::stoi(argv[1]);
	int n = std::stoi(argv[2]);
	int o = std::stoi(argv[3]);
	int p = std::stoi(argv[4]);

	nByMMatrix1	= genererateNbyMmatrix(m, n);

	nByMMatrix2	= genererateNbyMmatrix(o, p);
	
	std::cout << "The first matrix is " << n << " columns by " << m << std::endl;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
				std::cout << nByMMatrix1[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	std::cout << "The second matrix is " << p << " columns by " << o << std::endl;
	
	for (int i = 0; i < o; i++) {
		for (int j = 0; j < p; j++) {
				std::cout << nByMMatrix2[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	product = matrixProduct(nByMMatrix1, nByMMatrix2);

	std::cout << "The product matrix should be " << n << " by " << o << std::endl;

	for (int i = 0; i < o; i++) {
		for (int j = 0; j < n; j++) {
				std::cout << product[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}

