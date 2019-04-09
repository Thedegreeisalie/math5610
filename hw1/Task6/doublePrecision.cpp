#include<iostream>

void doubleMachinePrecision(double E) {
	double prev_E;

	while((1+E) !=1) {
		prev_E = E;
		E /=2;
	}
	std::cout << prev_E << " is your double (double) machine precision" << std::endl; 
}

