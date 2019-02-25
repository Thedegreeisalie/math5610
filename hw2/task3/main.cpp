#include <iostream>

double relError(double x, double y);
float relError(float x, float y);
int relError(int x, int y);

int main() {
	int a = 1;
	int b = 2;
	float c = 1.0;
	float d = 1.00001;
	double e = 1.00000002;
	double f = 1.0000001;
	

	std::cout <<"absolute error: " << a << " , " << b << " ---" << relError(a,b) << std::endl;
	std::cout <<"absolute error: " << a << " , " << c << " ---" << relError(a,b) << std::endl;
	std::cout <<"absolute error: " << a << " , " << d << " ---" << relError(a,b) << std::endl;
	std::cout <<"absolute error: " << a << " , " << e << " ---" << relError(a,b) << std::endl;
	std::cout <<"absolute error: " << a << " , " << f << " ---" << relError(a,b) << std::endl;
	std::cout <<"absolute error: " << b << " , " << a << " ---" << relError(c,d) << std::endl;
	std::cout <<"absolute error: " << b << " , " << c << " ---" << relError(c,d) << std::endl;
	std::cout <<"absolute error: " << b << " , " << d << " ---" << relError(c,d) << std::endl;
	std::cout <<"absolute error: " << b << " , " << e << " ---" << relError(c,d) << std::endl;
	std::cout <<"absolute error: " << b << " , " << f << " ---" << relError(c,d) << std::endl;
	std::cout <<"absolute error: " << c << " , " << a << " ---" << relError(e,f) << std::endl;
	std::cout <<"absolute error: " << c << " , " << b << " ---" << relError(e,f) << std::endl;
	std::cout <<"absolute error: " << c << " , " << b << " ---" << relError(e,f) << std::endl;
	std::cout <<"absolute error: " << c << " , " << d << " ---" << relError(c,d) << std::endl;
	std::cout <<"absolute error: " << e << " , " << f << " ---" << relError(e,f) << std::endl;
	std::cout <<"absolute error: " << c << " , " << d << " ---" << relError(c,d) << std::endl;
	std::cout <<"absolute error: " << e << " , " << f << " ---" << relError(e,f) << std::endl;
	return 0;
}
