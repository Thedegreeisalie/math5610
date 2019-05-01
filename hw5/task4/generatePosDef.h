#ifndef _GENERATEPOSDEF_H_
#define _GENERATEPOSDEF_H_

#include <vector>
#include <chrono>
#include <random>
std::vector<std::vector<double>> generateNbyMMatrix(int, int);
std::vector<std::vector<double>> matrixProduct(std::vector<std::vector<double>>, std::vector<std::vector<double>>);
std::vector<std::vector<double>> generatePosDef(int n); 
#endif
