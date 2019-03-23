// Task: Implement a method/routine that computes and returns the absolute error in the approximation of a number x by another number y. Also create an entry for the method in your software manual
// in a frost course to numerical methods absolute Error in v is the absolute value of the difference of u and v
// |u-v| or abs(u-v)

#include <cstdlib>

#include "infNormMatrix.h" 
// This is done hideously by enumerating all the cases. This could be done better
double infNormMatrix(std::vector<std::vector<double>> x) {
	double maxRow;
	for( int i = 0; i < x.size(); i++) {
		double sum =0;
		for( int j = 0; j < x.size(); j++) {
			sum += x[j][i];
		}
		if(sum > maxRow) {
			maxRow= sum;
		}
	}
	return maxRow;
}
