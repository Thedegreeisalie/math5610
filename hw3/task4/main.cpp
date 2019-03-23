#include <iostream>
#include <chrono>
#include <random>

std::vector<std::vector<double>> generateSymetricNbyNMatrix(int);
double oneNormMatrix(std::vector<std::vector<double>> x);

int main(int argc, char *argv[]) {

	std::vector<std::vector<double>> Matrix = generateSymetricNbyNMatrix(std::stoi(argv[1]));
	for(int i =0; i < Matrix.size(); i++){
		for(int j =0; j < Matrix.size(); j++){
			std::cout << Matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
		
	std::cout << oneNormMatrix(Matrix) << std::endl;
	
	return 0;
}

//simple test cases
