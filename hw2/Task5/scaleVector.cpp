//task: Implement a method that will return a scalar multiple of a given vector. The method should require a vector and number for the operation. Add an entry to your software manual for this method. 

#include "scaleVector.h"

std::vector<double> scaleVector(double s1, std::vector<double> v1) {
	std::vector<double> sum;
	for( int i =0; i < v1.size(); i++) {
		sum.push_back(s1 * v1[i]);
	}
	return sum;
}
