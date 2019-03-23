#include <iostream>
#include <chrono>
#include <random>

double dotVector(std::vector<double> v1, std::vector<double> v2);

int main(int argc, char *argv[]) {
	
	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	std::vector<double> v1, v2;
   	double sum;

	int n = std::stoi(argv[1]);
	for (int i = 0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		v2.push_back(unif(re));
		v1.push_back(unif(re));
	}

	sum = dotVector(v1, v2);

	for (int i =0; i < n; i++) {
		std::cout << v1[i] << " * " << v2[i] << " + ";
	}
	std::cout<< " = " <<  sum << std::endl;
	return 0;
}

