#include <iostream>

double absError(double x, double y);
float absError(float x, float y);
int absError(int x, int y);

int main() {
	int a = 1;
	int b = 2;
	float c = 1.0;
	float d = 1.00001;
	double e = 1.00000002;
	double f = 1.0000001;
	

	std::cout <<"absolute error: " << a << " , " << b << " ---" << absError(a,b) << std::endl;
	std::cout <<"absolute error: " << a << " , " << c << " ---" << absError(a,b) << std::endl;
	std::cout <<"absolute error: " << a << " , " << d << " ---" << absError(a,b) << std::endl;
	std::cout <<"absolute error: " << a << " , " << e << " ---" << absError(a,b) << std::endl;
	std::cout <<"absolute error: " << a << " , " << f << " ---" << absError(a,b) << std::endl;
	std::cout <<"absolute error: " << b << " , " << a << " ---" << absError(c,d) << std::endl;
	std::cout <<"absolute error: " << b << " , " << c << " ---" << absError(c,d) << std::endl;
	std::cout <<"absolute error: " << b << " , " << d << " ---" << absError(c,d) << std::endl;
	std::cout <<"absolute error: " << b << " , " << e << " ---" << absError(c,d) << std::endl;
	std::cout <<"absolute error: " << b << " , " << f << " ---" << absError(c,d) << std::endl;
	std::cout <<"absolute error: " << c << " , " << a << " ---" << absError(e,f) << std::endl;
	std::cout <<"absolute error: " << c << " , " << b << " ---" << absError(e,f) << std::endl;
	std::cout <<"absolute error: " << c << " , " << b << " ---" << absError(e,f) << std::endl;
	std::cout <<"absolute error: " << c << " , " << d << " ---" << absError(c,d) << std::endl;
	std::cout <<"absolute error: " << e << " , " << f << " ---" << absError(e,f) << std::endl;
	std::cout <<"absolute error: " << c << " , " << d << " ---" << absError(c,d) << std::endl;
	std::cout <<"absolute error: " << e << " , " << f << " ---" << absError(e,f) << std::endl;
	return 0;
}
