#ifndef _MATRIXPRODUCT_H_
#define _MATRIXPRODUCT_H_

#include <vector>
#include <iostream>

double dotVector(std::vector<double>, std::vector<double>);
std::vector<std::vector<double>> matrixProduct(std::vector<std::vector<double>> v1, int rows1, int cols1, std::vector<std::vector<double>> v2, int rows2, int cols2);

#endif
