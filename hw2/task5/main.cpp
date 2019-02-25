#include <iostream>
#include <chrono>
#include <random>

std::vector<double> scaleVector(double scale, std::vector<double> v2);

int main(int argc, char *argv[]) {
	
	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	std::vector<double> v1, sum;

	int n = std::stoi(argv[1]);
	for (int i = 0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		v1.push_back(unif(re));
	}
	std::uniform_real_distribution<double> unif(1, 0);
	clock::duration d = clock::now() - begining;
	std::default_random_engine re (d.count());
	
	double scale = unif(re);

	sum = scaleVector(scale, v1);

	for (int i =0; i < n; i++) {
		std::cout << v1[i] << " * " << scale << " = "<<  sum[i] << std::endl;
	}
	return 0;
}

