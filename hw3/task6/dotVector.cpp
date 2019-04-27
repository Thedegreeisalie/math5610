#include "dotVector.h"

double dotVector(std::vector<double> v1, std::vector<double> v2) {
	double sum;
	for( int i =0; i < v1.size(); i++) {
		sum += v1[i] * v2[i];
	}
	return sum;
}
