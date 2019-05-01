#ifndef _SOLVELUFACTORIZATION_H_
#define _SOLVELUFACTORIZATION_H_

#include <vector>

std::vector<double> solveLUFactorization(std::vector<std::vector<double>>, std::vector<double>); 
std::vector<double> solveLowerTriangular(std::vector<std::vector<double>>, std::vector<double>); 
std::vector<double> solveUpperTriangular(std::vector<std::vector<double>>, std::vector<double>); 

#endif
