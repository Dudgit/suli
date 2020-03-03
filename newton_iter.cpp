#include <iostream>
#include <cmath>

double f(double x) {
	return sin(x);
}

double integral(int n, double a, double b){
	const double w = (b-a)/n;

double t_i = 0;
for (int i = 0; i < n; i++){
	const double x1 = a + i*w;
	const double x2 = a + (i+1)*w;

	t_i += 0.5 * (x2 - x1) * (f(x1) + f(x2));
}
	return t_i; 
}

int main() {
	std :: cout << integral(10,0,10) << std::endl; 

	return 0;
}
