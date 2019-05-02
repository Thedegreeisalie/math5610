#ifndef _NATURALEQUATIONS_H_
#define _NATURALEQUATIONS_H_

#include <vector>
#include <math.h>

std::vector<double> NaturalEquations(std::vector<std::vector<double>>, std::vector<double>); 
std::vector<std::vector<double>> CholeskyFactorization(std::vector<std::vector<double>>); 
std::vector<double> solveLowerTriangular(std::vector<std::vector<double>>, std::vector<double>);
std::vector<double> solveUpperTriangular(std::vector<std::vector<double>>, std::vector<double>);
std::vector<double> matrixVectorProduct(std::vector<std::vector<double>>, std::vector<double>);

#endif
