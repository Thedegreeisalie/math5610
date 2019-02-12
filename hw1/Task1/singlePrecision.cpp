#include <iostream>

void singleMachinePrecision(float E) {
	float prev_E;

	while((1+E) !=1) {
		prev_E = E;
		E /=2;
	}
	std::cout << prev_E << " is your single (float) machine precision" << std::endl; 
}
