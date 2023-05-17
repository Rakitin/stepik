#include <iostream>
#include <cmath>
#include <algorithm>

int main() 
{
	double a { 0.0 };
	double b { 0.0 };
	double c { 0.0 };
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	double d = pow(b, 2.0) - 4*a*c;
	if (d > 0) {
		double x1 = (-b - sqrt(d)) / (2*a);
		double x2 = (-b + sqrt(d)) / (2*a);
		std::cout << std::min(x1, x2) << " " << std::max(x1, x2) << std::endl;
	}
	else if (d == 0) {
		std::cout << -b/(2*a) << std::endl;
	}
	

	return 0;
}
