#include<iostream>
#include<cfloat>

void machinePrecision(float E) {
	float prev_E;

	while((1+E) !=1) {
		prev_E = E;
		E /=2;
	}
	std::cout << "This has compiled " << prev_E << " is your machine precision" << std::endl; 
}

int main(){
	machinePrecision(0.5);
	return 0;	
}
