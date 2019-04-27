// Task: Implement a method/routine that computes and returns the absolute error in the approximation of a number x by another number y. Also create an entry for the method in your software manual
// in a frost course to numerical methods absolute Error in v is the absolute value of the difference of u and v
// |u-v| or abs(u-v)

#include <cstdlib>

#include "absError1NormVector.h" 
// This is done hideously by enumerating all the cases. This could be done better
double absError1NormVector(std::vector<double> x, std::vector<double> y) {
	double sumx;
	double sumy;
	for( int i =0; i < x.size(); i++) {
		sumx += x[i];
		sumy += y[i];
	}
	return absError(sumx, sumy) ;
}
