#include "outerVector.h"

std::vector<std::vector<double>> outerVector(std::vector<double> v1, std::vector<double> v2){

	std::vector<std::vector<double>> sum;
	
	for( int i =0; i < v1.size(); i++) {
		std::vector<double> Row;
		for (int j =0; j < v2.size(); j++) {
			Row.push_back(0.0);
		}
		sum.push_back(Row);
	}

	for( int i =0; i < v1.size(); i++) {
		for (int j =0; j < v2.size(); j++) {
			sum[i][j] = v1[i] * v2[j];
		}
	}

	
	return sum;
}
