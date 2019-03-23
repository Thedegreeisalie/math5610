// Task: Implement a method that will compute the 2-norm of an arbitrary vector will real number entries. Add an entry to your for the method you create
#include "oneNormVector.h"

double oneNormVector(std::vector<double> v1) {
	double sum = 0.0;
	for( int i = 0; i < v1.size(); i++) {
		sum += abs(v1[i]);
	}
	return sum;
}
