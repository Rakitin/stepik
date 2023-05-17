#include <iostream>
#include <cmath>

int main() 
{
	double n { 0.0 };
	std::cin >> n;
	std::cout << n - trunc(n) << std::endl;
	return 0;
}
