#include <iostream>
#include <iomanip>

int main() 
{
	double n { 0.0 };
	std::cin >> n;
	int count { 0 };
	double sum { 0.0 };
	while (n) {
		sum += n;
		++count;
		std::cin >> n;
	}
	std::cout << std::setprecision(11) << std::fixed;
	std::cout << sum/count << std::endl;
	return 0;
}
