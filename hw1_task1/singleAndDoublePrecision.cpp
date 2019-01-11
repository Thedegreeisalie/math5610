#include<iostream>

void singleMachinePrecision(float E) {
	float prev_E;

	while((1+E) !=1) {
		prev_E = E;
		E /=2;
	}
	std::cout << prev_E << " is your single (float) machine precision" << std::endl; 
}
void doubleMachinePrecision(double E) {
	double prev_E;

	while((1+E) !=1) {
		prev_E = E;
		E /=2;
	}
	std::cout << prev_E << " is your double (double) machine precision" << std::endl; 
}

int main(){
	singleMachinePrecision(0.5);
	doubleMachinePrecision(0.5);
	return 0;	
}
