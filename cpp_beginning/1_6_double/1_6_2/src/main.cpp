#include <iostream>
#include <cmath>

int main() 
{
	double n { 0.0 };
	std::cin >> n;
	std::cout << trunc((n - trunc(n)) * 10) << std::endl;
	return 0;
}
