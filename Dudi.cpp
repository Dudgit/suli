#include <iostream>
#include <math.h>

template<typename T,typename R>
auto integral(int n, T a, R b){
	
    const double w = (b-a)/n;

    double t_i = 0;
    
    for (int i = 0; i < n; i++){
    	const double x1 = a + i*w;
    	const double x2 = a + (i+1)*w;
    	auto function = [x1,x2](){return sin(x1)+sin(x2);};
        t_i += 0.5 * (x2 - x1) * (function());
    }
	
    return t_i; 
}

int main() {
	std::cout << integral(10,0,10) << std::endl;
}
