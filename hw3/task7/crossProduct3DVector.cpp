// Task: Implement a method that returns the cross-product of two vectors of length three. Add an entry to your software manual that documents the method.
#include "crossProduct3DVector.h"

std::vector<double> crossProduct3DVector(std::vector<double> v1, std::vector<double> v2) {
	
	std::vector<double> crossProduct;
	
	double a_0 = v1[0];
	double a_1 = v1[1];
	double a_2 = v1[2];

	double b_0 = v2[0];
	double b_1 = v2[1];
	double b_2 = v2[2];

	crossProduct.push_back((a_1*b_2) - (a_2*b_1));
	crossProduct.push_back((a_2*b_0) - (a_0*b_2));
	crossProduct.push_back((a_0*b_1) - (a_1*b_0));

	return crossProduct;
}
