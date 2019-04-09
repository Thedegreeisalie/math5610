#include <iostream>
#include <chrono>
#include <random>

std::vector<double> crossProduct3DVector(std::vector<double> v1, std::vector<double> v2 );

int main(int argc, char *argv[]) {
	
	typedef std::chrono::high_resolution_clock clock;
	clock::time_point begining = clock::now();

	std::vector<double> v1;
	std::vector<double> v2;

	int n = 3;	
	for (int i = 0; i < n; i++) {
		std::uniform_real_distribution<double> unif(1, 0);
		clock::duration d = clock::now() - begining;
		std::default_random_engine re (d.count());
		v1.push_back(unif(re));

		clock::duration d0 = clock::now() - begining;
		std::default_random_engine re0 (d0.count());
		v2.push_back(unif(re0));
	}
	std::vector<double> crossProduct = crossProduct3DVector(v1, v2);
	
	std::cout << v1[1] << " * " << v2[2] << " - " << v1[2] << " * " << v2[1] << " = " << crossProduct[0] << std::endl;
	std::cout << v1[2] << " * " << v2[0] << " - " << v1[0] << " * " << v2[2] << " = " << crossProduct[1] << std::endl;
	std::cout << v1[0] << " * " << v2[1] << " - " << v1[1] << " * " << v2[0] << " = " << crossProduct[2] << std::endl;
	//(v1[1]*v2[2]) - (v1[2]*v2[1])
    //(v1[2]*v2[0]) - (v1[0]*v2[2])
	//(v1[0]*v2[1]) - (v1[1]*v2[0])
	return 0;
}

