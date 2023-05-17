#include <iostream>
#include <cmath>

int main() 
{
	double a { 0.0 };
	double b { 0.0 };
	double c { 0.0 };
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	double p = (a + b + c)/2;
	double s = sqrt(p*(p - a)*(p - b)*(p - c));
	std::cout << s << std::endl;

	return 0;
}
