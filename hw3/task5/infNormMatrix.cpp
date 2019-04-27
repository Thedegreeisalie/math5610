#include <cstdlib>

#include "infNormMatrix.h" 

double infNormMatrix(std::vector<std::vector<double>> x) {
	double maxRow;
	for( int i = 0; i < x.size(); i++) {
		double sum =0;
		for( int j = 0; j < x.size(); j++) {
			sum += x[j][i];
		}
		if(sum > maxRow) {
			maxRow = sum;
		}
	}
	return maxRow;
}
