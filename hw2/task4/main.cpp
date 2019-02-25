#include <iostream>
#include <chrono>
#include <random>

#include "libMath5610.h"

std::vector<double> addVector(std::vector<double> v1, std::vector<double> v2);

int main(int argc, char *argv[]) {
	
	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	std::vector<double> v1, v2, sum;

	int n = std::stoi(argv[1]);
	for (int i = 0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		v2.push_back(unif(re));
		v1.push_back(unif(re));
	}

	sum = addVector(v1, v2);

	for (int i =0; i < n; i++) {
		std::cout << v1[i] << " + " << v2[i] << " = "<<  sum[i] << std::endl;
	}
	return 0;
}

