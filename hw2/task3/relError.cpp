#include <cstdlib>
#include "relError.h" 
// Task: Implement a method/routine that computes and returns the relative error in the approximation of a number x another number y. Also create an entrx for the method in xour software manual.
// relError(applroximation, value)
// This is done hideously by enumerating all the cases. This could be done better
double relError(double y, double x) {
	return std::abs(x - y) / std::abs(x) ;
}

float relError(float y, float x) {
	return std::abs(x - y) / std::abs(x);
}

int relError(int y, int x) {
	return std::abs(x - y) / std::abs(x) ;
}

double relError(int y, double x) {
	return std::abs(x - static_cast<double>(y))/ std::abs(x);
}

float relError(int y, float x) {
	return std::abs(x - static_cast<float>(y)) / std::abs(x);
}

float relError(float y, int x) {
	x = static_cast<float>(x);
	return std::abs(x - y) / std::abs(x);
}

double relError(double y, int x) {
	x = static_cast<double>(x);
	return std::abs(x - y) / std::abs(x);
}

double relError(double y, float x) {
	x = static_cast<double>(x);
	return std::abs(x - y) / std::abs(x) ;
}

double relError(float y, double x) {
	return std::abs(x - static_cast<double>(y)) / std::abs(x) ;
}


