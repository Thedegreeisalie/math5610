#include <iostream>
#include "libMath5610.h"

void doubleMachinePrecision(double E);
void singleMachinePrecision(float E);

int main(){
	singleMachinePrecision(0.5);
	doubleMachinePrecision(0.5);
	return 0;	
}
