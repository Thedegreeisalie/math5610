#include <cstdlib>
// Task: Implement a method/routine that computes and returns the absolute error in the approximation of a number x by another number y. Also create an entry for the method in your software manual
// in a frost course to numerical methods absolute Error in v is the absolute value of the difference of u and v
// |u-v| or abs(u-v)

// This is done hideously by enumerating all the cases. This could be done better
double absError(double x, double y) {
	return std::abs(y - x) ;
}

float absError(float x, float y) {
	return std::abs(y - x) ;
}

int absError(int x, int y) {
	return std::abs(y - x) ;
}

double absError(int x, double y) {
	return std::abs(y - static_cast<double>(x));
}

float absError(int x, float y) {
	return std::abs(y - static_cast<float>(x));
}

float absError(float x, int y) {
	return std::abs(static_cast<float>(y) - x);
}

double absError(double x, int y) {
	return std::abs(static_cast<double>(y) - x);
}

double absError(double x, float y) {
	return std::abs(static_cast<double>(y) - x) ;
}

double absError(float x, double y) {
	return std::abs(y - static_cast<double>(x)) ;
}
