#include <iostream>
#include <chrono>
#include <random>

double twoNormVector(std::vector<double> v1);


int main(int argc, char *argv[]) {
	
	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	std::vector<double> v1;
	double sum = 0.0;

	int n = std::stoi(argv[1]);
	for (int i = 0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		v1.push_back(unif(re));
	}
	sum = twoNormVector(v1);
	
	std::cout << "sqrt(";
	for (int i =0; i < n; i++) {
		std::cout << v1[i] << "*" << v1[i] << "+";
	}
	std::cout << ") = " << sum << std::endl;
	return 0;
}

